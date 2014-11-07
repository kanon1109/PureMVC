#ifndef __MEDIATOR__
#define __MEDIATOR__
#pragma once
#include "cocos2d.h"
#include "model/Notification.h"
#include "Facade.h"
USING_NS_CC;
using namespace std;

class Facade;
class Mediator : public CCObject
{
public:
	Mediator();
	~Mediator();

	const char* mediatorName;		//mediator name(mandetory)

protected:
	/**
	 * handle notification
	 */
	virtual void handleNotification(Notification* notification){};

	/**
	 * intrested notification list
	 */
	virtual vector<const char*> listNotificationInterests();

	/**
	 * send notification
	 */
	void sendNotification(const char* notificationName, CCObject* body = NULL);

	/**
	 * update per-second
	 */
	virtual void update(){};

	void schedule();
	void unschedule();

	vector<const char*> m_notificationList;

	Facade* m_facade;
private:
	/**
	 * get mvc message
	 */
	void onGetMvcMsg(Notification* notification);
	/**
	 * get update message
	 */
	void onGetUpdateMsg(CCObject* obj);
};

#endif