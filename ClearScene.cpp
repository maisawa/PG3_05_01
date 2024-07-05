#include "ClearScene.h"
#include <Novice.h>

void ClearScene::Init(){

}

void ClearScene::Update(char* keys, char* preKeys){
	if (!preKeys[DIK_SPACE] && keys[DIK_SPACE]) {
		sceneNo_ = TITLE;
	}
}

void ClearScene::Draw(){
	Novice::ScreenPrintf(600,360,"Clear");
}
