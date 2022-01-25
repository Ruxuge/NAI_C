#include <iostream>
#include <opencv2/highgui.hpp>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int lab9()
{
    double scale = 1.0;

    cv::CascadeClassifier bananaCascade;
    bananaCascade.load("/home/ruxuge/CLionProjects/NAI_C/zadania/zad9/banana_classifier.xml");
    assert(!bananaCascade.empty());

    cv::VideoCapture video(0);

    if (video.isOpened())
    {
        std::cout << "Work" << std::endl;
    }

    cv::Mat frame;

    int number = 0;

    vector<Point> lastCenter;
    lastCenter.push_back({0, 0});

    while (video.read(frame))
    {
        video >> frame;

        cv::Mat grayscale;
        cvtColor(frame, grayscale, cv::COLOR_BGR2GRAY);

        resize(grayscale, grayscale, Size(grayscale.size().width / scale, grayscale.size().height / scale));

        vector<Point> newCenter;
        vector<Rect> bananas;
        bananaCascade.detectMultiScale(grayscale, bananas, 1.1, 3.0, 0, Size(200, 200));

        for (Rect area : bananas)
        {
            newCenter.clear();
            newCenter.push_back({(area.x + ((area.x + area.width -1) * scale))/2, (area.y + ((area.y + area.height -1) * scale))/2});

            if( (abs(newCenter[0].x - lastCenter[0].x)) > 50 || (abs(newCenter[0].y - lastCenter[0].y)) > 50 ){
                number = number + 1;
            }

            lastCenter[0].x = newCenter[0].x;
            lastCenter[0].y = newCenter[0].y;

            Scalar drawColour = Scalar(255, 0, 0);
            rectangle(
                frame,
                Point(
                    cvRound(area.x * scale),
                    cvRound(area.y * scale)),
                Point(
                    cvRound((area.x + area.width - 1) * scale),
                    cvRound((area.y + area.height - 1) * scale)),
                drawColour);
        }

        putText(frame,                                                     //target image
                "Number of bananas on image:" + to_string(bananas.size()), //text
                cv::Point(10, frame.rows / 2),                             //top-left position
                cv::FONT_HERSHEY_DUPLEX,
                1.0,
                CV_RGB(118, 185, 0), //font color
                2);

        putText(frame,                                        //target image
                "Number of all bananas:" + to_string(number), //text
                cv::Point(10, frame.rows / 4),                //top-left position
                cv::FONT_HERSHEY_DUPLEX,
                1.0,
                CV_RGB(118, 185, 0), //font color
                2);

        cv::imshow("video feed", frame);

        if (cv::waitKey(25) >= 0)
        {
            break;
        }
    }

    return 0;
}
