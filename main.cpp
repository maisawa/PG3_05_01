#include <Novice.h>
#include <InputHandler.h>
#include <Player.h>

const char kWindowTitle[] = "GC2C_11_マイサワ_ショウマ";

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1280, 720);

	// キー入力結果を受け取る箱
	char keys[256] = {0};
	char preKeys[256] = {0};

	Player *player_=new Player();
	
	/*InputHandler *move_=new InputHandler();
	ICommand *icommand_=new MoveRightCommand();
	ICommand *icommand2_=new MoveLeftCommand();*/

	// ウィンドウの×ボタンが押されるまでループ
	while (Novice::ProcessMessage() == 0) {
		// フレームの開始
		Novice::BeginFrame();

		// キー入力を受け取る
		memcpy(preKeys, keys, 256);
		Novice::GetHitKeyStateAll(keys);

		///
		/// ↓更新処理ここから
		///
		
		///
		/// ↑更新処理ここまで
		///

		///
		/// ↓描画処理ここから
		///

		player_->Update();
		player_->Draw();

		/*move_->AssignMoveLeftCommand2PressKeyA();
		move_->AssignMoveRightCommand2PressKeyD();
		move_->HandleInput();
		icommand_->Exec(*player_);
		icommand2_->Exec(*player_);
		player_->MoveLeft();
		player_->MoveRight();*/

		
		
		///
		/// ↑描画処理ここまで
		///

		// フレームの終了
		Novice::EndFrame();

		// ESCキーが押されたらループを抜ける
		if (preKeys[DIK_ESCAPE] == 0 && keys[DIK_ESCAPE] != 0) {
			break;
		}
	}

	// ライブラリの終了
	Novice::Finalize();
	return 0;
}