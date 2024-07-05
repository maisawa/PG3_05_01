#pragma once
#include <Command.h>
#include <InputHandler.h>


class StageScene{
private:

	InputHandler *inputHandler_=nullptr;
	ICommand *iCommand_=nullptr;
	Player *player_;
	ICommand *command_;

public:

	void Init();
	void Update();
	void Draw();
};