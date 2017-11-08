#ifndef GAME
#define GAME

#include <SFML/Graphics.hpp>
#include <cmath>
#include <iostream>
#include <chrono>
#include <thread>

#include "Hammering.h"
#include "Walking.h"
#include "Climbing.h"
#include "Jumping.h"
#include "Shoveling.h"
#include "Swordsmanship.h"

class Game
{
public:
	Game();
	~Game();
	void run();

private:

	sf::RenderWindow m_window; // main SFML window
	sf::Font m_ArialBlackfont;
	sf::Text m_Message;
	Animation m_fsm;
	sf::Texture walk, climb, jump, slash, hammer, shovel,idle;
	sf::RectangleShape image;

	void processEvents();
	void update(sf::Time t_deltaTime);
	void render();

	void setupFontAndText();
	void setupTexture();
};

#endif // !GAME

