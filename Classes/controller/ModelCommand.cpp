#include "ModelCommand.h"
#include "model/proxy/TestProxy.h"
//往后追加

ModelCommand::ModelCommand()
{
}

ModelCommand::~ModelCommand()
{
}

void ModelCommand::execute(Notification* notification)
{
	facade->registerProxy(new TestProxy());
	//往后追加
}