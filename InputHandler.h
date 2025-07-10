#pragma once
#include "Command.h"
//入力管理クラス
class InputHandler {
private:
	//A
	ICommand* pressKeyA_;
	//D
	ICommand* pressKeyD_;
	//S
	ICommand* pressKeyS_;
	//W
	ICommand* pressKeyW_;


public:

	ICommand* HandleInput();

	//A
	void AssignMoveLeftCommand2PressKeyA();

	//D
	void AssignMoveLeftCommand2PressKeyD();

	//W
	void AssignMoveUpCommand2PressKeyW();

	//S
	void AssignMoveDownCommand2PressKeyS();
};