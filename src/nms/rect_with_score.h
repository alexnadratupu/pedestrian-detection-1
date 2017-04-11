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
	CRectWithScore::CRectWithScore(int x, int y, int width, int height);
	CRectWithScore(const CRectWithScore& r);

	~CRectWithScore()
	{

	}

private:
	Rect m_rect;
	double m_score;
};
}
 
#endif