#include <Novice.h>
#include "Environment.h"
#include "InputManager.h"

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, kWindowSize.x, kWindowSize.y);

	// キー入力結果を受け取る箱
	InputManager* input = InputManager::GetInstance();

	///
	/// ↓変数の宣言ここから
	///


	///
	/// ↑変数の宣言ここまで
	///

	// ウィンドウの×ボタンが押されるまでループ
	while (Novice::ProcessMessage() == 0) {
		// フレームの開始
		Novice::BeginFrame();

		// キー入力を受け取る
		input->Update();

		///
		/// ↓更新処理ここから
		///

		

		///
		/// ↑更新処理ここまで
		///

		///
		/// ↓描画処理ここから
		///

	

		///
		/// ↑描画処理ここまで
		///

		// フレームの終了
		Novice::EndFrame();

		// ESCキーが押されたらループを抜ける
		if (input->IsTriggerKey(DIK_ESCAPE)) {
			break;
		}
	}

	// ライブラリの終了
	Novice::Finalize();
	return 0;
}
