#ifndef __FACADE__
#define __FACADE__

#include "model/proxy/Proxy.h"
#include "view/mediator/Mediator.h"
#include "cocos2d.h"

USING_NS_CC;
using namespace std;

class Mediator;
class Proxy;
class Facade
{
public:
	Facade();
	~Facade();
	
	/**
	 * retrieve a proxy
	 * @param proxyName		proxy name
	 */
	Proxy* retrieveProxy(const char* proxyName);

	/**
	 * retrieve a mediator
	 * @param mediatorName	mediator name
	 */
	Mediator* retrieveMediator(const char* mediatorName);

	/**
	 * register a proxy
	 * @param proxy			proxy
	 */
	void registerProxy(Proxy* proxy);

	/**
	 * register a mediator
	 * @param mediator		mediator
	 */
	void registerMediator(Mediator* mediator);

	/**
	 * call proxy-registed function initData
	 */
	void initProxyData();

	/**
	 * register command
	 */
	//void registerCommand(const char* commandName, Fn_CreateCommand pFn);

	/**
	 * send notification
	 */
	void sendNotification(const char* notificationName, CCObject* body = NULL);

	//Command* createCommand(const char* commandName);
	/**
	 * singleton
	 */
	static Facade* getInstance();

private:
	CCDictionary* proxyDict;	//proxy map
	CCDictionary* mediatorDict;	//mediator map
	//map<string, Fn_CreateCommand>	m_commandMap;	//command map
	
};

#define g_facade Facade::getInstance()

#endif // !__FACADE__