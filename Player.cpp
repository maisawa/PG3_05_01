#include "Player.h"
#include <Novice.h>
#include <InputHandler.h>

void Player::Init()
{

}

void Player::Draw()
{
	Novice::DrawBox((int)pos_.x,(int)pos_.y,100,100,0.0f,WHITE,kFillModeSolid);
}
void Player::MoveRight(){
	this->pos_.x+=this->speed_;
}

void Player::MoveLeft(){
	this->pos_.x-=this->speed_;
}

void Player::Update()
{
	MoveRight();
	MoveLeft();
}