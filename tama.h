#pragma once
#include "Vector2.h"

class tama
{
public:
	Vector2 pos_;
	int speed_;
	int r_;
	bool isShot_;

public:
	tama(Vector2 pos, int speed, int r, bool isShot);
	void Update();
	void Draw();
};