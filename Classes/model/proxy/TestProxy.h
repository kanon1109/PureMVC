#pragma once
#ifndef _TEST_PROXY_
#define _TEST_PROXY_
#include "model/proxy/Proxy.h"
//proxy������ ����ͨ�������õ�proxy
#define TEST_PROXY_NAME	"test_proxy"
class TestProxy:public Proxy
{
public:
	TestProxy();
	~TestProxy();
	//��ʼ������
	void initData();
};
#endif
