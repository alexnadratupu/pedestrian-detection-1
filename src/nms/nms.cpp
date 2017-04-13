/*
 * 非最大抑制类实现
 * Copyright @ 2017-2037 chao deng
 *
 */

#include "nms.h"
using namespace pd;
 
CNms::CNms()
{
}

CNms::~CNms()
{
}

int CNms::AddPossibleTargetRects(std::vector<CRectWithScore&> possible_rects)
{
	std::vector<CRectWithScore&>::iterator iter;
	for (iter = possible_rects.begin(); iter < possible_rects.end(); iter++)
	{
		m_possible_target_rects.push_back(*iter);
	}
}

std::vector<CRectWithScore&>* CNms::DoNms()
{
	if (0 == m_possible_target_rects.size())
	{
		return NULL;
	}

	std::vector<CRectWithScore&>* result_rects = new std::vector<CRectWithScore&>();

	// 排序

	// 

}

double CNms::CalculateOverlap(CRectWithScore& rect1, CRectWithScore& rect2)
{

}

void CNms::sort(std::vector<CRectWithScore&>& rects)
{


}