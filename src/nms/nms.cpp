/*
 * 非最大抑制类实现
 * Copyright @ 2017-2037 chao deng
 *
 */

#include "nms.h"
#include <algorithm>
using namespace pd;
 
CNms::CNms()
{
}

CNms::~CNms()
{
}

int CNms::AddPossibleTargetRects(std::vector<CRectWithScore*> possible_rects)
{
	if (0 == possible_rects.size())
	{
		return -1;
	}

	std::vector<CRectWithScore*>::iterator iter;
	for (iter = possible_rects.begin(); iter < possible_rects.end(); iter++)
	{
	    m_possible_target_rects.push_back(*iter);
    }

	return 0;
}

bool CNms::Compare(CRectWithScore* a, CRectWithScore* b)
{
	if (a->GetScore() >= b->GetScore())
	{
		return true;
	}
	else {
		return false;
	}
}

std::vector<CRectWithScore*>* CNms::DoNms()
{
	if (0 == m_possible_target_rects.size())
	{
		return NULL;
	}

	// 排序
	sort(m_possible_target_rects.begin(), m_possible_target_rects.end());

	// 


}

int CNms::CalculateOverlap(CRectWithScore& rect1, CRectWithScore& rect2)
{
	int rect1_top_left_x = rect1.GetTopLeftPoint()->x; 
	int rect1_top_left_y = rect1.GetTopLeftPoint()->y;
	int rect1_bottom_right_x = rect1_top_left_x + rect1.GetWidth();
	int rect1_bottom_right_y = rect1_top_left_y - rect1.GetHeight();

	int rect2_top_left_x = rect2.GetTopLeftPoint()->x;
	int rect2_top_left_y = rect2.GetTopLeftPoint()->y;
	int rect2_bottom_right_x = rect1_top_left_x + rect2.GetWidth();
	int rect2_bottom_right_y = rect1_top_left_y - rect2.GetHeight();

	// no overlap 
	// x-axis
	if ((rect1_bottom_right_y > rect2_top_left_y) || (rect2_bottom_right_y > rect1_top_left_y))
	{
		return 0;
	}
	// y-axis
	if ((rect1_top_left_x > rect2_bottom_right_x) || (rect2_top_left_x > rect1_bottom_right_x))
	{
		return 0;
	}

	int overlap_top_left_x = (rect1_top_left_x > rect2_top_left_x) ? rect1_top_left_x : rect2_top_left_x;
	int overlap_top_left_y = (rect1_top_left_y < rect2_top_left_y) ? rect1_top_left_y : rect2_top_left_y;

	int overlap_bottom_right_x = (rect1_top_left_x > rect2_top_left_x) ? rect1_top_left_x : rect2_top_left_x;
	int overlap_bottom_right_y = (rect1_top_left_y < rect2_top_left_y) ? rect1_top_left_y : rect2_top_left_y;

	int overlap = (overlap_bottom_right_x - overlap_top_left_x) * (overlap_bottom_right_y - overlap_top_left_y);
	return overlap;
}
