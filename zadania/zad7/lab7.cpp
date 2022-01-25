#include <opencv2/opencv.hpp>
#include <iostream>
using namespace std;
using namespace cv;

const int max_value_H = 360/2;
const int max_value = 255;



int low_H = 0, low_S = 0, low_V = 0;
int high_H = max_value_H, high_S = max_value, high_V = max_value;

static void on_low_H_thresh_trackbar(int, void *)
{
    low_H = min(high_H-1, low_H);
    setTrackbarPos("Low H", "frame_threshold", low_H);
}
static void on_high_H_thresh_trackbar(int, void *)
{
    high_H = max(high_H, low_H+1);
    setTrackbarPos("High H", "frame_threshold", high_H);
}
static void on_low_S_thresh_trackbar(int, void *)
{
    low_S = min(high_S-1, low_S);
    setTrackbarPos("Low S", "frame_threshold", low_S);
}
static void on_high_S_thresh_trackbar(int, void *)
{
    high_S = max(high_S, low_S+1);
    setTrackbarPos("High S", "frame_threshold", high_S);
}
static void on_low_V_thresh_trackbar(int, void *)
{
    low_V = min(high_V-1, low_V);
    setTrackbarPos("Low V", "frame_threshold", low_V);
}
static void on_high_V_thresh_trackbar(int, void *)
{
    high_V = max(high_V, low_V+1);
    setTrackbarPos("High V", "frame_threshold", high_V);
}

int lab7()
{
   Mat myImage, image, blured, resizedBlur, hsvImg, frame_threshold;
   int x = 320, y = 200;

   namedWindow("Video Player");
   namedWindow("frame_threshold");

   createTrackbar("Low H", "frame_threshold", &low_H, max_value_H, on_low_H_thresh_trackbar);
   createTrackbar("High H", "frame_threshold", &high_H, max_value_H, on_high_H_thresh_trackbar);
   createTrackbar("Low S", "frame_threshold", &low_S, max_value, on_low_S_thresh_trackbar);
   createTrackbar("High S", "frame_threshold", &high_S, max_value, on_high_S_thresh_trackbar);
   createTrackbar("Low V", "frame_threshold", &low_V, max_value, on_low_V_thresh_trackbar);
   createTrackbar("High V", "frame_threshold", &high_V, max_value, on_high_V_thresh_trackbar);

   
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

      cvtColor(myImage, hsvImg, COLOR_BGR2HSV);
      inRange(hsvImg, Scalar(low_H, low_S, low_V), Scalar(high_H, high_S, high_V), frame_threshold);
      imshow("Video Player", hsvImg);
      imshow("frame_threshold", frame_threshold);

      char c = (char)waitKey(25);
      if (c == 112)
      {
         image = myImage;
         imwrite("/home/ruxuge/CLionProjects/NAI_C/zadania/zad6/images/image.jpg", image);
         GaussianBlur(image, blured, Size(45, 45), 0);
         cout << "Podaj x: ";
         cin >> x;
         cout << "Podaj y: ";
         cin >> y;
         resize(blured, resizedBlur, Size(x, y));
         imshow("blured", resizedBlur);
         namedWindow("blured");
      }
      if (c == 120){
          Rect2d r = selectROI(myImage);
          Mat cropFrame = myImage(r);
          imshow("Basic", cropFrame);
          imwrite("/home/ruxuge/CLionProjects/NAI_C/zadania/zad6/images/croppedImage.jpg", cropFrame);
      }
      if (c == 27)
      {
         break;
      }
   }
   cap.release();
   return 0;
}