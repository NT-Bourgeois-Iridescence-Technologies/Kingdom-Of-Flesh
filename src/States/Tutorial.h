#pragma once
#include "../State/GameState.h"
#include "../GameDialog.h"
#include <Graphics/2D/SpriteBase.h>
#include <Utilities/Timer.h>
#include "Menu.h"
#include <Graphics/2D/Tilemap.h>

using namespace Stardust::Graphics;

class TutorialState : public GameState {
public:
	TutorialState();

	void init();
	void cleanup();

	void enter();
	void pause();
	void resume();

	void update(GameStateManager* st);
	void draw(GameStateManager* st);

private:
	Texture* texAtlas;
	TextureAtlas* atlas;
	Render2D::Tilemap* tmap;
	int stage;
};