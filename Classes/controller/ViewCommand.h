#ifndef __VIEW_COMMAND__
#define __VIEW_COMMAND__

#include "Command.h"


class ViewCommand : public Command
{
public:
	ViewCommand();
	~ViewCommand();

	void execute(Notification* notification = NULL);
};

#endif