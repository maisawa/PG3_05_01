#pragma once

#include <memory>
#include "IScene.h"
#include "TitleScene.h"
#include "StageScene.h"
#include "ClearScene.h"
#include <Novice.h>
using namespace std;//std省略

class GameManager
{
public://メンバ関数

	GameManager();//コンストラクタ

	~GameManager();//デストラクタ

	int Run(char* keys, char* preKeys);

private://メンバ変数

	/*std::*/unique_ptr<IScene> sceneArr_[3];

	int currentSceneNo_;
	int prevSceneNo_;
};
