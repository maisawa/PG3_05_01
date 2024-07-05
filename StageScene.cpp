#include <StageScene.h>

void StageScene::Init(){
	inputHandler_=new InputHandler();

	inputHandler_->AssignMoveRightCommand2PressKeyD();
	inputHandler_->AssignMoveLeftCommand2PressKeyA();

	player_=new Player();
}

void StageScene::Update(){

	iCommand_=inputHandler_->HandleInput();

	if(this->command_){
		iCommand_->Exec(*player_);
	}
	player_->Update();
}

void StageScene::Draw()
{

}
