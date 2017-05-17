/*
 * ´øscore¾ØÐÎÀà
 * Copyright @ 2017-2037 chao deng
 *
 */
 
#include "rect_with_score.h"

namespace pd{

CRectWithScore::CRectWithScore()
{
	m_rect.x = 0;
	m_rect.y = 0;
	m_rect.width = 0;
	m_rect.height = 0;
	m_top_left_point = new cv::Point();
}

CRectWithScore::CRectWithScore(int x, int y, int width, int height)
{
	m_rect.x = x;
	m_rect.y = y;
	m_rect.width = width;
	m_rect.height = height;
	m_top_left_point = new cv::Point();
}

CRectWithScore::CRectWithScore(cv::Rect& rect)
{
	m_rect.x = rect.x;
	m_rect.y = rect.y;
	m_rect.width = rect.width;
	m_rect.height = rect.height;
	m_top_left_point = new cv::Point();
}

CRectWithScore::~CRectWithScore()
{
	delete m_top_left_point;
}

cv::Point* CRectWithScore::GetTopLeftPoint()
{
	return m_top_left_point;
}

int CRectWithScore::GetWidth()
{
	return m_rect.width;
}

int CRectWithScore::GetHeight()
{
	return m_rect.height;
}

double CRectWithScore::GetScore()
{
	return m_score;
}

}
