#include "IScene.h"
#include <dinput.h>

void IScene::Update(char* keys, char* preKeys){
    if (keys[DIK_SPACE] && preKeys[DIK_SPACE]) {

	}
}
int IScene::SceneNo_ = TITLE;
IScene::IScene(){

}

IScene::~IScene(){

}
