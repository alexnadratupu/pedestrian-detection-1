/*
 * ´øscore¾ØÐÎÀà
 * Copyright @ 2017-2037 chao deng
 *
 */
 
#include "rect_with_score.h"

namespace pd{

CRectWithScore::CRectWithScore(int x, int y, int width, int height)
{
	m_rect.x = x;
	m_rect.y = y;
	m_rect.width = width;
	m_rect.height = height;
}

CRectWithScore::CRectWithScore(const CRectWithScore& r)
{
	m_rect = r.m_rect;
	m_score = r.m_score;
}

}
