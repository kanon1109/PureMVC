#ifndef __PROXY__
#define __PROXY__
#pragma once
#include "cocos2d.h"
#include "model/Notification.h"
//#include "S2CVo.h"
#include "Facade.h"

USING_NS_CC;

class Proxy;

//typedef void (Proxy::*MessageCall)(CCBuffer*);

//typedef std::map<int, MessageCall> ItemMap;

//#define messageCall_selector(_SELECTOR) (MessageCall)(&_SELECTOR)

//#define DEFREG_MESSAGE(MID, CLASS, FUNC) registerHandler(MID, messageCall_selector(CLASS::FUNC))

using namespace std;
class Facade;
class Proxy : public CCObject
{
public:
	Proxy();
	~Proxy();
	const char* proxyName;	//proxy name(mandetory)

	/**
	 * init data, parse xml
	 */
	virtual	void initData(){};

	virtual void onRegisterMessage(){};
	
	/**
	 * handle message from server
	 */
	//virtual void handleS2CMessage(S2CVo* s2cVo){};

	//!注册消息处理器，注册成功返回0, 否则-1
	//int registerHandler(int id, MessageCall handler);

	/**
	 * send notification
	 */
	void sendNotification(const char* notificationName, CCObject* body = NULL);
	//vector<int> 	m_s2cList;
private:
	/**
	 * on receive message from server
	 */
	//void  onGetS2CMessage(S2CVo* s2cVo);
	//ItemMap 	m_xItemMap;
};

#endif