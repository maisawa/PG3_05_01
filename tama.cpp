#include "tama.h"
#include "Novice.h"

tama::tama(Vector2 pos, int speed, int r, bool isShot)
{
	pos_ = pos;
	speed_ = speed;
	r_ = r;
	isShot_ = isShot;
}

void tama::Update()
{
	if (isShot_ == true)
	{
		pos_.y -= speed_;
		if (pos_.y <= 0)
		{
			isShot_ = false;
		}
	}
}

void tama::Draw()
{
	if (isShot_ == true)
	{
		Novice::DrawEllipse((int)pos_.x, (int)pos_.y, r_, r_, 0.0f, WHITE, kFillModeSolid);
	}
}