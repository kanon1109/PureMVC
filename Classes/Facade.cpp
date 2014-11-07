#include "Facade.h"

Facade::Facade()
{
	proxyDict = CCDictionary::create();
	proxyDict->retain();

	mediatorDict = CCDictionary::create();
	mediatorDict->retain();
}

Facade::~Facade()
{
}

void Facade::registerProxy(Proxy* proxy)
{
	proxy->onRegisterMessage();
	proxyDict->setObject(proxy, proxy->proxyName);
}

void Facade::registerMediator(Mediator* mediator)
{
	mediatorDict->setObject(mediator, mediator->mediatorName);
}

Proxy* Facade::retrieveProxy(const char* pName)
{
	return (Proxy*)proxyDict->objectForKey(pName);
}

Mediator* Facade::retrieveMediator(const char* mName)
{
	return (Mediator*)mediatorDict->objectForKey(mName);
}

void Facade::initProxyData()
{
	CCDictElement* element;
	Proxy* proxy;
	CCDICT_FOREACH(proxyDict, element)
	{
		proxy = (Proxy*)(proxyDict->objectForKey(element->getStrKey()));
		proxy->initData();
	}
}

void Facade::sendNotification(const char* notificationName, CCObject* body /* = NULL */)
{
	Notification* notification;
	notification = new Notification();
	notification->notificationName = notificationName;
	notification->body = body;
	CCNotificationCenter::sharedNotificationCenter()->postNotification("MVC_MESSAGE", notification);
}

static Facade* m_instance = NULL;
Facade* Facade::getInstance()
{
	if (m_instance == NULL)
		m_instance = new Facade();
	return m_instance;
}