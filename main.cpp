#include <Novice.h>
#include "GameManager.h"

const char kWindowTitle[] = "GC2C_03_キョク_キンウ";
const int kWindowWidth = 1280; // 画面の横幅
const int kWindowHeight = 720; // 画面の縦幅

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, kWindowWidth, kWindowHeight);


	/// 初期処理
	GameManager* gameManager = new GameManager();


		///
		/// ↓更新処理ここから
		///
		gameManager->Run();
		///
		/// ↑更新処理ここまで
		///

		//-------------------------------------//

		///
		/// ↓描画処理ここから
		///

		///
		/// ↑描画処理ここまで
		///

		// フレームの終了
	
		delete gameManager;

	// ライブラリの終了
	Novice::Finalize();
	return 0;
}
