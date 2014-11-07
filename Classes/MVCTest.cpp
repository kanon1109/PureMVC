#include "MVCTest.h"
#include "controller\InitDataCommand.h"
#include "controller\ModelCommand.h"
#include "controller\ViewCommand.h"

MVCTest::MVCTest()
{
	//Æô¶¯mvc¿ò¼Ü
	this->startupMvc();
}

MVCTest::~MVCTest()
{

}

void MVCTest::startupMvc()
{
	ModelCommand* modelCommand = new ModelCommand();
	modelCommand->execute(NULL);
	modelCommand->release();

	ViewCommand* viewCommand = new ViewCommand();
	viewCommand->execute(NULL);
	viewCommand->release();

	InitDataCommand* initDataCommand = new InitDataCommand();
	initDataCommand->execute(NULL);
	delete initDataCommand;
}
