#ifndef __NOTIFICATION__
#define __NOTIFICATION__
#pragma once
#include "cocos2d.h"
USING_NS_CC;
class Notification : public CCObject
{
public:
	Notification();
	~Notification();
	const char*	notificationName;	//消息名
	CCObject* body;					//消息体
};
#endif