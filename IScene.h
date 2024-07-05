#pragma once

enum Scene{
	TITLE,STAGE,CLEAR
};

class IScene{
public:

	virtual void Init() = 0;
	virtual void Update(char* keys, char* preKeys);
	virtual void Draw() = 0;

	IScene();
	virtual ~IScene();
	int GetScene(){return SceneNo_;}
protected:
	static int SceneNo_;

};