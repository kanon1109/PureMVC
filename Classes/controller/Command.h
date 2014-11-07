#ifndef __COMMAND__
#define __COMMAND__
#pragma once
#include "cocos2d.h"
#include "Facade.h"
#include "model/Notification.h"
USING_NS_CC;
class Command : public CCObject
{
public:
	Command();
	~Command();
	

protected:
	Facade* facade;
	virtual void execute(Notification* notification = NULL){};
};

#endif