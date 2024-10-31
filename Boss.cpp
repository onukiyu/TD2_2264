#include "Boss.h"
#include "MathUtilityForText.h"
#include "Vector3.h"
#include <cassert>

void Boss::Initialize(Model* model, uint32_t textureHandle) {

	// NULLポインタチェック
	assert(model);

	// 引数として受け取ったデータをメンバ変数に記録する
	modelBoss_ = model;
	textureHandle_ = textureHandle;
	// viewProjection_ = viewProjection;

	// ワールド変換の初期化
	worldTransform_.Initialize();

	worldTransform_.translation_.z = 5;//ボスの位置

	worldTransform_.scale_ = {2, 2, 2};//ボスの大きさ

}

void Boss::Update() {

	worldTransform_.UpdateMatrix();

}

void Boss::Draw(ViewProjection& viewProjection) {
	// 3Dモデルを描画
	modelBoss_->Draw(worldTransform_, viewProjection, textureHandle_);
}
