#ifndef GAME
#define GAME

#include <SFML/Graphics.hpp>
#include <cmath>
#include <iostream>
#include <chrono>
#include <thread>
#include "Animation.h"

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

	void processEvents();
	void update(sf::Time t_deltaTime);
	void render();

	void setupFontAndText();
};

#endif // !GAME

