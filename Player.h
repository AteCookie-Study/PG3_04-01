#pragma once

#include <Vector2.h>

//using namespace KamataEngine;

//プレイヤー
class Player {

private:

	// 位置
	Vector2 position_;

	// 速さ
	float speed_ = 2.0f;

public:

	void Initialize();

	void Update();

	void Draw();

	/// 右移動
	void MoveRight();

	/// 左移動
	void MoveLeft();

	/// 上移動
	void MoveUp();

	/// 下移動
	void MoveDown();

	const Vector2& GetPosition();
};