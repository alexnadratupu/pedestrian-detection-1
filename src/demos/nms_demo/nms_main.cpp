/* 
 * nms demo main 
 */ 
 
#include "nms.h"
#include "rect_with_score.h"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/core/core.hpp"

int main(int argc, char* argv[])
{
	// prepare the picture and the targets windows, and display
	cv::Rect detect_window1(10, 10, 260, 270);
	cv::Rect detect_window2(19, 19, 260, 270);
	cv::Rect detect_window3(13, 21, 260, 270);

	cv::Rect detect_window4(470, 280, 270, 270);
	cv::Rect detect_window5(475, 288, 270, 270);
	cv::Rect detect_window6(465, 275, 270, 270);
	cv::Rect detect_window7(480, 270, 270, 270);

	cv::Rect detect_window8(200, 530, 200, 170);
	cv::Rect detect_window9(210, 532, 200, 170);

	cv::Mat image(800, 800, CV_8UC3, cv::Scalar(0));
	cv::rectangle(image, detect_window1, cv::Scalar(0, 255, 255));
	cv::rectangle(image, detect_window2, cv::Scalar(0, 255, 255));
	cv::rectangle(image, detect_window3, cv::Scalar(0, 255, 255));
	cv::rectangle(image, detect_window4, cv::Scalar(255, 0, 255));
	cv::rectangle(image, detect_window5, cv::Scalar(255, 0, 255));
	cv::rectangle(image, detect_window6, cv::Scalar(255, 0, 255));
	cv::rectangle(image, detect_window7, cv::Scalar(255, 0, 255));
	cv::rectangle(image, detect_window8, cv::Scalar(255, 255, 0));
	cv::rectangle(image, detect_window9, cv::Scalar(255, 255, 0));

	cv::imshow("rectangles", image);
	cv::waitKey();

	// do nms


	// display the nms result



    return 0;
}