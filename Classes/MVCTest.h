#pragma once
#ifndef _MVC_TEST_
#define _MVC_TEST_
#include "cocos2d.h"
USING_NS_CC;
class MVCTest:public CCScene
{
public:
	MVCTest();
	~MVCTest();
	CREATE_FUNC(MVCTest);

	//¿ªÊ¼mvc
	void startupMvc();
};
#endif
