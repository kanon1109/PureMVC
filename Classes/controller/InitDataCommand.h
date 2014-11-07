#ifndef __INIT_DATA_COMMAND__
#define __INIT_DATA_COMMAND__
#include "Command.h"
#include "model/Notification.h"
class InitDataCommand : public Command
{
public:
	InitDataCommand();
	~InitDataCommand();

	void execute(Notification* notification);
};

#endif