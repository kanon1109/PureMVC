#include "TestProxy.h"
#include "config\MessageConfig.h"

//�����õ�proxy
TestProxy::TestProxy()
{
	this->proxyName = TEST_PROXY_NAME;
}

TestProxy::~TestProxy()
{
}

void TestProxy::initData()
{
	//��ʼ��������ݣ����ñ� xml
	CCLOG("initData");
	this->sendMsg();
}

void TestProxy::sendMsg()
{
	this->sendNotification(TEST, CCString::create("test message"));
}

