#include "TestMediator.h"
#include "config\MessageConfig.h"

TestMediator::TestMediator()
{
	this->mediatorName = TEST_MEDIATOR_NAME;
}

TestMediator::~TestMediator()
{
}

vector<const char*> TestMediator::listNotificationInterests()
{
	vector<const char*> vect;
	vect.push_back(TEST);
	vect.push_back(TEST2);
	return vect;
}

void TestMediator::handleNotification(Notification* notification)
{
	if (strcmp(notification->notificationName, TEST) == 0)
	{
		CCString* str = (CCString* )notification->body;
		CCLOG(str->getCString()); //print test message
		this->sendNotification(TEST2, CCString::create("mediator message"));
		return;
	}
	if (strcmp(notification->notificationName, TEST2) == 0)
	{
		CCString* str = (CCString*)notification->body;
		CCLOG(str->getCString()); //print mediator message
		return;
	}
}
