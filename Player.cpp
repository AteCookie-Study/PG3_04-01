#include "Player.h"
#include <Novice.h>

void Player::Initialize() {
	position_ = { 200.0f,200.0f };
}

void Player::Update() {}

void Player::Draw() {
	Novice::DrawBox((int)position_.x, (int)position_.y, 50, 50, 0.0f, WHITE, kFillModeSolid);
}

void Player::MoveRight() {
	this->position_.x += speed_;
}

void Player::MoveLeft() {
	this->position_.x -= speed_;
}

void Player::MoveUp() {
	position_.y -= speed_;
}

void Player::MoveDown() {
	position_.y += speed_;
}