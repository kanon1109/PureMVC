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

	//������Ϣ
	void handleNotification(Notification* notification);

	//�г�����Ȥ����Ϣ
	vector<const char*> listNotificationInterests();
};
#endif // !1
