#include "TestProxy.h"

//测试用的proxy
TestProxy::TestProxy()
{
	this->proxyName = TEST_PROXY_NAME;
}

TestProxy::~TestProxy()
{
}

void TestProxy::initData()
{
	//初始化你的数据，配置表 xml
	CCLOG("initData");
}
