#include "game.h"

Game::Game()
{
	Spaceship spaceship;
}

Game::~Game() {

}

void Game::Draw() {
	spaceship.Draw();
}

void Game::HandleInput() {
	if (IsKeyDown(KEY_LEFT)) {
		spaceship.MoveLeft();
	}
	else if (IsKeyDown(KEY_RIGHT)) {
		spaceship.MoveRight();
	}
}
