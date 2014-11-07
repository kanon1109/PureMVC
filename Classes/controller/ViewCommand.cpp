#include "ViewCommand.h"
#include "view/mediator/TestMediator.h"

ViewCommand::ViewCommand()
{
}

ViewCommand::~ViewCommand()
{
}

void ViewCommand::execute(Notification* notification)
{
	facade->registerMediator(new TestMediator());
}