#include "Proxy.h"

Proxy::Proxy()
{
	/*CCNotificationCenter::sharedNotificationCenter()->addObserver(	this,
																	callfuncO_selector(Proxy::onGetS2CMessage),
																	"S2C_MESSAGE",
																	NULL);*/
}

Proxy::~Proxy()
{
}

void Proxy::sendNotification(const char* notificationName, CCObject* body /* = NULL */)
{
	Notification* notification;
	notification = new Notification();
	notification->notificationName = notificationName;
	notification->body = body;
	CCNotificationCenter::sharedNotificationCenter()->postNotification("MVC_MESSAGE", notification);
}

/*
void Proxy::onGetS2CMessage(S2CVo* s2cVo)
{
	if (NULL == s2cVo)
	{
		return;
	}

	ItemMap::iterator iter = m_xItemMap.find(s2cVo->s2cId);

	if (iter != m_xItemMap.end())
	{
		MessageCall fun = iter->second;

		(this->*fun)(s2cVo->buffer);
	}
}*/

/*
int Proxy::registerHandler(int id, MessageCall handler)
{
	ItemMap::iterator iter = m_xItemMap.find(id);
	if (iter != m_xItemMap.end())
	{
		return -1;
	}
	else
	{
		m_xItemMap[id] = handler;
		return 0;	
	}
}*/
