#pragma once
#include "IScene.h"
#include "InputHandler.h"
#include "Command.h"
#include "Player.h"

class StageScene : public IScene {
public:
	void Initialize();
	void Update(char* keys, char* preKeys) override; 
	void Draw();

private:
	InputHandler* inputHandler_ = nullptr;
	ICommand* iCommand_ = nullptr;
	Player* player_;
};