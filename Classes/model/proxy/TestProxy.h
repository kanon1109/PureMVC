#pragma once
#ifndef _TEST_PROXY_
#define _TEST_PROXY_
#include "model/proxy/Proxy.h"
//proxy的名字 可以通过名字拿到proxy
#define TEST_PROXY_NAME	"test_proxy"
class TestProxy:public Proxy
{
public:
	TestProxy();
	~TestProxy();
	//初始化数据
	void initData();
};
#endif
