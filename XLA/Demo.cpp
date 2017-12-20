#include<conio.h>
#include<iostream>
#include "opencv/cv.h"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
using namespace std;
using namespace cv;

int main()
{

	cvNamedWindow("Hello", CV_WINDOW_AUTOSIZE);
	IplImage *image = cvLoadImage("D:\\Temp\\Temp_PHP\\800x450.png");
	cvShowImage("Hello", image);
	cvWaitKey(0);
	cvReleaseImage(&image);
	_getch();
	return 0;
}