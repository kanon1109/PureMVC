#include "TestMediator.h"

TestMediator::TestMediator()
{
	this->mediatorName = TEST_MEDIATOR_NAME;
}

TestMediator::~TestMediator()
{
}

void TestMediator::handleNotification(Notification* notification)
{

}

void TestMediator::sendNotification(const char* notificationName, CCObject* body /*= NULL*/)
{

}

vector<const char*> TestMediator::listNotificationInterests()
{
	vector<const char*> vect;
	return vect;
}
