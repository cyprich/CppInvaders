#include "game.h"

Game::Game()
{
	Spaceship spaceship;
}

Game::~Game() {

}

void Game::Update() {
	for (auto& laser : spaceship.lasers) {
		laser.Update();
	}

	DeleteInactiveLasers();
}

void Game::Draw() {
	spaceship.Draw();

	for (auto& laser : spaceship.lasers) {
		laser.Draw();
	}
}

void Game::HandleInput() {
	if (IsKeyDown(KEY_LEFT)) {
		spaceship.MoveLeft();
	}
	else if (IsKeyDown(KEY_RIGHT)) {
		spaceship.MoveRight();
	}
	
	if (IsKeyDown(KEY_SPACE)) {
		spaceship.Shoot();
	}
}

void Game::DeleteInactiveLasers() {
	for (auto i = spaceship.lasers.begin(); i != spaceship.lasers.end();) {
		if (!i->GetActive()) {
			i = spaceship.lasers.erase(i);
		}
		else {
			++ i;
		}
	}
}
