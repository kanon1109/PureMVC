#include "Mediator.h"

Mediator::Mediator()
{
	CCNotificationCenter::sharedNotificationCenter()->addObserver(	this,
																	callfuncO_selector(Mediator::onGetMvcMsg),
																	"MVC_MESSAGE",
																	NULL);

	

	m_notificationList = listNotificationInterests();
	m_facade = Facade::getInstance();
}

Mediator::~Mediator()
{
}

void Mediator::schedule()
{
	CCNotificationCenter::sharedNotificationCenter()->addObserver(	this,
																	callfuncO_selector(Mediator::onGetUpdateMsg),
																	"update_time_1_sec",
																	NULL);
}

void Mediator::unschedule()
{
	CCNotificationCenter::sharedNotificationCenter()->removeObserver(this, "update_time_1_sec");
}

vector<const char*> Mediator::listNotificationInterests()
{
	vector<const char*> vec;
	return vec;
}

void Mediator::sendNotification(const char* notificationName, CCObject* body /* = NULL */)
{
	Notification* notification;
	notification = new Notification();
	notification->notificationName = notificationName;
	notification->body = body;
	CCNotificationCenter::sharedNotificationCenter()->postNotification("MVC_MESSAGE", notification);
}

void Mediator::onGetMvcMsg(Notification* notification)
{
	vector<const char*> vec = listNotificationInterests();
	
	vector<const char*>::iterator it = vec.begin();
	vector<const char*>::iterator end = vec.end();

	for (; it != end;++it)
	{
		if (strcmp(notification->notificationName, *it) == 0)
		{
			handleNotification(notification);
		}
	}
}

void Mediator::onGetUpdateMsg(CCObject* obj)
{
	update();
}
