
#include "StageScene.h"
#include <Novice.h>
#include "Player.h"

void StageScene::Initialize() {
	inputHandler_ = new InputHandler();

	inputHandler_->AssignMoveLeftCommand2PressKeyA();
	inputHandler_->AssignMoveLeftCommand2PressKeyD();
	inputHandler_->AssignMoveUpCommand2PressKeyW();
	inputHandler_->AssignMoveDownCommand2PressKeyS();

	player_ = new Player();
	player_->Initialize();
}

void StageScene::Update(char* keys, char* preKeys) {
	// 未使用のパラメーターを明示的に無視
	(void)keys;
	(void)preKeys;

	// 使用 keys と preKeys で入力を処理
	iCommand_ = inputHandler_->HandleInput();

	if (iCommand_) {
		iCommand_->Execute(*player_);
	}

	player_->Update();

	if (player_) {
		player_->Update();

		// プレイヤーの位置判定
		const Vector2& playerPosition = player_->GetPosition();
		if (playerPosition.x > 500.0f && playerPosition.y > 300.0f) {
			sceneNo = CLEAR;
		}
	}
}

void StageScene::Draw() {
	player_->Draw();
}