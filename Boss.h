#pragma once
#include "Model.h"
#include "WorldTransform.h"

class Boss {

public:
	void Initialize(Model* model, uint32_t textureHandle);

	void Update();

	void Draw(ViewProjection& viewProjection);

private:
	// ワールド変換データ
	WorldTransform worldTransform_;
	// モデル
	Model* modelBoss_ = nullptr;
	// テクスチャハンドル
	uint32_t textureHandle_ = 0u;
};
