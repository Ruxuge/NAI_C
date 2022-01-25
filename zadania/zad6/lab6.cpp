#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>


int lab6(){
    bool capturing = true;
    int key = 0;
    cv::VideoCapture cap(0);
    if ( !cap.isOpened()) {
        std::cerr << "error" << std::endl;
        return -1;
    }
    std::cout << "Video size: " << cap.get( cv::CAP_PROP_FRAME_WIDTH) << "x" << cap.get(cv::CAP_PROP_FRAME_HEIGHT ) << std::endl;
    do{
        cv::Mat frame;
        cv::Mat frame1;
        cv::Mat frame2;
        cv::Mat frame3;


        if( cap.read( frame )){
            flip(frame, frame1, 1);
            flip(frame, frame2, 0);
            flip(frame, frame3, 1);

            cv::imshow( "Normal", frame);
            cv::imshow( "Me1", frame1);
            cv::imshow( "Me2", frame2);
            cv::imshow( "Me3", frame3);


        }else
        {
            capturing = false;
        }
        if (key == 113)capturing = false;

    }while( capturing );
    return 0;
};
