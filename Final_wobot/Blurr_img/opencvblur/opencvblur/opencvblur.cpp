// opencvblur.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <opencv2/opencv.hpp>
using namespace cv;

int main(void) {

	// Read image in GrayScale mode
	Mat image = imread("girl.jpg", 0);

	// Save grayscale image
	imwrite("girlGray.jpg", image);

	// To display the image
	imshow("Grayscale Image", image);
	waitKey(0);

	return 0;
}