/*
 * 带score矩形类
 * 该score即该矩形的权值
 * Copyright @ 2017-2037 chao deng
 *
 */


#ifndef RECT_WITH_SCORE_H
#define RECT_WITH_SCORE_H


#include "opencv2/core/core.hpp"
namespace pd {

class CRectWithScore {

public:
	CRectWithScore();
	CRectWithScore(int x, int y, int width, int height);

	~CRectWithScore();

	cv::Point* GetTopLeftPoint();

	int GetWidth();
	int GetHeight();
	double GetScore();

	bool operator > (const CRectWithScore &m)const {
		return m_score > m.m_score;
	}

private:
	cv::Rect m_rect;
	cv::Point* m_top_left_point;
	double m_score;
};
}
 
#endif