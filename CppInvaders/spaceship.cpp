#include "spaceship.h"

Spaceship::Spaceship()
{
	image = LoadTexture("graphics/spaceship.png");
	position.x = (GetScreenWidth() - image.width) / 2;
	position.y = GetScreenHeight() - image.height - 50;
}

Spaceship::~Spaceship() {
	UnloadTexture(image);
}

void Spaceship::Draw() {
	DrawTextureV(image, position, WHITE);
}

void Spaceship::MoveLeft() {
	position.x -= 7;

	if (position.x < 0) {
		position.x = 0;
	}	
}

void Spaceship::MoveRight() {
	position.x += 7;
	if ((position.x + image.width) >= GetScreenWidth()) {
		position.x = (GetScreenWidth() - image.width);
	}
}