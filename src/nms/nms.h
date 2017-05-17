/*
 * �����������
 * Copyright @ 2017-2037 chao deng
 *
 */

/*
 * ���������Ӧ����һϵ�еľ��Σ�ÿ�����ζ���һ��score��Ҳ���Ǹþ���������Ŀ������Ŷȡ�
 * ��ֻ��һ�������࣬��û�б�Ҫ������α�����ֻ��Ҫ������α�������ü��ɡ�
 * ���εĻ���opencv��Rect�࣬Ūһ��vector���������еľ��Ρ����ε�score����ô��ʾ�������¶���һ���ࣿ
 */


#ifndef NMS_DEFINE_H
#define NMS_DEFINE_H

#include <vector>
#include "rect_with_score.h"

namespace pd {


class CNms {

public:
	CNms();
	~CNms();
	int AddPossibleTargetRects(std::vector<CRectWithScore*> possible_rects);
	void DoNms(double overlap_threshold, std::vector<cv::Rect*>& result_rect);

	bool Compare(CRectWithScore* a, CRectWithScore* b);

private:
	int CalculateOverlap(CRectWithScore* rect1, CRectWithScore* rect2);

private:
	std::vector<CRectWithScore*> m_possible_target_rects;
	std::vector<CRectWithScore*> m_result_rects;
};
}
 
 #endif