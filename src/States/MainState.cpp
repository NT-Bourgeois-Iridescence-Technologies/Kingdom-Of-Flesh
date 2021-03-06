#include "MainState.h"
#include "../Core/PauseHandler.h"
#include <Utilities/Input.h>

MainState::MainState()
{
}

void MainState::init()
{
	g_World = new World();
}

void MainState::cleanup()
{
}

void MainState::enter()
{
}

void MainState::pause()
{
}

void MainState::resume()
{
}

void MainState::update(GameStateManager* st)
{
	g_World->update();

	if (Utilities::KeyPressed(PSP_CTRL_START)) {
		pauseHandler();
	}

}

void MainState::draw(GameStateManager* st)
{
	g_World->draw();
}
