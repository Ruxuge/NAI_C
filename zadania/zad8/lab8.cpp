#include <opencv2/opencv.hpp>
#include <iostream>
using namespace std;
using namespace cv;

int lab8()
{
    Mat myImage, image, frameMask, frameNegMask;

    int loRange[3] = {0, 117, 169};
    int hiRange[3] = {31, 255, 255};

    namedWindow("trackbars");

    createTrackbar("loRange0", "trackbars", &(loRange[0]), 255);
    createTrackbar("loRange1", "trackbars", &(loRange[1]), 255);
    createTrackbar("loRange2", "trackbars", &(loRange[2]), 255);
    createTrackbar("hiRange0", "trackbars", &(hiRange[0]), 255);
    createTrackbar("hiRange1", "trackbars", &(hiRange[1]), 255);
    createTrackbar("hiRange2", "trackbars", &(hiRange[2]), 255);

    list<Point> tracking_path;


    VideoCapture cap(0);
    if (!cap.isOpened())
    {
        cout << "No video stream detected" << endl;
        system("pause");
        return -1;
    }
    while (true)
    {
        cap >> myImage;
        if (myImage.empty())
        {
            break;
        }
        flip(myImage, myImage, 1);

        cvtColor(myImage, frameMask, COLOR_BGR2HSV);
		inRange(frameMask, Scalar(loRange[0], loRange[1], loRange[2]),
			Scalar(hiRange[0], hiRange[1], hiRange[2]), frameNegMask);

        int dilation_size = 5;

		auto structElem = getStructuringElement(MORPH_ELLIPSE,
            Size(2 * dilation_size + 1, 2 * dilation_size + 1),
            Point(dilation_size, dilation_size));
        erode(frameNegMask, frameNegMask, structElem);
        dilate(frameNegMask, frameNegMask, structElem);

        imshow("trackbars", frameNegMask);

		vector<vector<Point>> contours;
		findContours(frameNegMask, contours, RETR_LIST, CHAIN_APPROX_NONE);

        sort(contours.begin(), contours.end(),
			[](auto& a, auto& b) {
			return contourArea(a, false) > contourArea(b, false);
		});

        Point avg[2] = {};

		for (int i = 0; i < min(2, (int)contours.size()); i++)
		{
			approxPolyDP(contours.at(i), contours.at(i), 10, true);
			drawContours(myImage, contours, i, { 0,0,255,255 });
			Rect r = boundingRect(contours.at(i));
			avg[i].x = r.x + r.width / 2;
			avg[i].y = r.y + r.height / 2;
		}

        if(abs(avg[0].y - avg[1].y) < 50) {
            line(myImage, avg[0], avg[1], Scalar(0, 0, 0),10, 8);
        }

		imshow("contours", myImage);

        char c = (char)waitKey(25);
        if (c == 27)
        {
            break;
        }
    }
    cap.release();
    return 0;
}