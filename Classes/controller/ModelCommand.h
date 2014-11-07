#ifndef __MODEL_COMMAND__
#define __MODEL_COMMAND__
#include "Command.h"

class ModelCommand : public Command
{
public:
	ModelCommand();
	~ModelCommand();

	void execute(Notification* notification = NULL);
};

#endif