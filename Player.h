#pragma once
#include <Vector2.h>

class Player{
private:

	Vector2 pos_{50.0f,50.0f};
	float speed_=3.0f;

public:


void Init();
void Update();
void Draw();

void MoveRight();
void MoveLeft();

};