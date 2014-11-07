#include "InitDataCommand.h"
#include "Facade.h"

InitDataCommand::InitDataCommand()
{
}


InitDataCommand::~InitDataCommand()
{
}

void InitDataCommand::execute(Notification* notification)
{
	g_facade->initProxyData();
}
