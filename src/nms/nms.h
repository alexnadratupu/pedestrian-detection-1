/*
 * 非最大抑制类
 * Copyright @ 2017-2037 chao deng
 *
 */

/*
 * 处理的数据应该是一系列的矩形，每个矩形都有一个score，也就是该矩形里面有目标的置信度。
 * 我只是一个工具类，我没有必要保存矩形本身，我只需要保存矩形本身的引用即可。
 * 矩形的话用opencv的Rect类，弄一个vector来保存所有的矩形。矩形的score该怎么表示，再重新定义一个类？
 */


#ifndef NMS_DEFINE_H
#define NMS_DEFINE_H

#include <vector>

namespace pd {


class CNms {

public:
	CNms()
	{

	}

	~CNms()
	{

	}

private:



};
}
 
 #endif