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
	pd::CRectWithScore detect_window1_with_score(detect_window1);
	cv::Rect detect_window2(19, 19, 260, 270);
	pd::CRectWithScore detect_window2_with_score(detect_window2);
	cv::Rect detect_window3(13, 21, 260, 270);
	pd::CRectWithScore detect_window3_with_score(detect_window3);

	cv::Rect detect_window4(470, 280, 270, 270);
	pd::CRectWithScore detect_window4_with_score(detect_window4);
	cv::Rect detect_window5(475, 288, 270, 270);
	pd::CRectWithScore detect_window5_with_score(detect_window5);
	cv::Rect detect_window6(465, 275, 270, 270);
	pd::CRectWithScore detect_window6_with_score(detect_window6);
	cv::Rect detect_window7(480, 270, 270, 270);
	pd::CRectWithScore detect_window7_with_score(detect_window7);

	cv::Rect detect_window8(200, 530, 200, 170);
	pd::CRectWithScore detect_window8_with_score(detect_window8);
	cv::Rect detect_window9(210, 532, 200, 170);
	pd::CRectWithScore detect_window9_with_score(detect_window9);

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
	pd::CNms* nms = new pd::CNms();
	std::vector<pd::CRectWithScore*> rect_with_score_vec;
	rect_with_score_vec.push_back(&detect_window1_with_score);
	rect_with_score_vec.push_back(&detect_window2_with_score);
	rect_with_score_vec.push_back(&detect_window3_with_score);
	rect_with_score_vec.push_back(&detect_window4_with_score);
	rect_with_score_vec.push_back(&detect_window5_with_score);
	rect_with_score_vec.push_back(&detect_window6_with_score);
	rect_with_score_vec.push_back(&detect_window7_with_score);
	rect_with_score_vec.push_back(&detect_window8_with_score);
	rect_with_score_vec.push_back(&detect_window9_with_score);

	nms->AddPossibleTargetRects(rect_with_score_vec);

	std::vector<cv::Rect*> result_rect;
	nms->DoNms(1, result_rect);

	// display the nms result
	std::vector<cv::Rect*>::iterator iter;
	for (iter = result_rect.begin(); iter < result_rect.end(); iter++)
	{
		cv::rectangle(image, *(*iter), cv::Scalar(255, 255, 0));
	}

    return 0;
}