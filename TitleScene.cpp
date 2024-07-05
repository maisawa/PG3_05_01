#include "TitleScene.h"
#include <Novice.h>

void TitleScene::Init(){

}

void TitleScene::Update(char* keys, char* preKeys){
	if (!preKeys[DIK_SPACE] && keys[DIK_SPACE]) {
		sceneNo_ = STAGE;
	}
}

void TitleScene::Draw(){
	Novice::ScreenPrintf(600,360,"Title");
}
