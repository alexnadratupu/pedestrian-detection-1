/* 
 * nms demo main 
 */ 
 
#include "nms.h"
#include "rect_with_score.h"
#include "opencv2/highgui/highgui.hpp"


int main(int argc, char* argv[])
{
	// prepare the picture and the targets windows, and display
	cv::Rect detect_window1(10, 10, 60, 70);
	cv::Rect detect_window2(11, 12, 60, 70);
	cv::Rect detect_window3(13, 15, 60, 70);

	cv::Rect detect_window4(70, 80, 90, 70);
	cv::Rect detect_window5(75, 88, 89, 70);
	cv::Rect detect_window6(65, 75, 98, 70);
	cv::Rect detect_window7(80, 70, 90, 79);

	cv::Rect detect_window8(100, 30, 60, 70);
	cv::Rect detect_window9(110, 32, 60, 70);

	cv::Mat image(200, 200, CV_8UC3, cv::Scalar(0));

	cv::imshow("rectangles", image);
	cv::waitKey();

	// do nms


	// display the nms result



    return 0;
}