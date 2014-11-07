#pragma once
#ifndef _TEST_MEDIATOR_
#define _TEST_MEDIATOR_
#include "view/mediator/Mediator.h"
#define TEST_MEDIATOR_NAME	"test_mediator"
class TestMediator:public Mediator
{
public:
	TestMediator();
	~TestMediator();

	//接收消息
	void handleNotification(Notification* notification);

	//列出感兴趣的消息
	vector<const char*> listNotificationInterests();
};
#endif // !1
