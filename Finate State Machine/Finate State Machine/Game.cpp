#include "Game.h"
#include <iostream>

Game::Game() :
	m_window{ sf::VideoMode{ 800, 600, 32 }, "Finite State Machine" }
{
	setupFontAndText(); // load font 
	setupTexture();
}

Game::~Game()
{
}

void Game::run()
{
	sf::Clock clock;
	sf::Time timeSinceLastUpdate = sf::Time::Zero;
	sf::Time timePerFrame = sf::seconds(1.f / 60.f); // 60 fps
	while (m_window.isOpen())
	{
		processEvents(); // as many as possible
		timeSinceLastUpdate += clock.restart();
		while (timeSinceLastUpdate > timePerFrame)
		{
			timeSinceLastUpdate -= timePerFrame;
			processEvents(); // at least 60 fps
			update(timePerFrame); //60 fps
		}
		render(); // as many as possible
	}
}

void Game::processEvents()
{
	sf::Event event;
	while (m_window.pollEvent(event))
	{
		if (sf::Event::Closed == event.type) // window message
		{
			m_window.close();
		}
		if (sf::Event::KeyPressed == event.type) //user key press
		{
			if (sf::Keyboard::J == event.key.code)
			{
				m_fsm.jumping();
				image.setTexture(&jump, true);
			}
			if (sf::Keyboard::H == event.key.code)
			{
				m_fsm.hammering();
				image.setTexture(&hammer, true);
			}
			if (sf::Keyboard::D == event.key.code)
			{
				m_fsm.shoveling();
				image.setTexture(&shovel, true);
			}
			if (sf::Keyboard::S == event.key.code)
			{
				m_fsm.swordsmanship();
				image.setTexture(&slash, true);
			}
			if (sf::Keyboard::W == event.key.code)
			{
				m_fsm.walking();
				image.setTexture(&walk, true);	
			}
			if (sf::Keyboard::C == event.key.code)
			{
				m_fsm.climbing();
				image.setTexture(&climb, true);
			}
		}
	}
}

/// <summary>
/// Update the game world
/// </summary>
/// <param name="t_deltaTime">time interval per frame</param>
void Game::update(sf::Time t_deltaTime)
{
	/*std::cout << "countdown:\n";
	for (int i = 10; i>0; --i) {
		std::cout << i << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(1));
	}
	std::cout << "Lift off!\n";*/
}

/// <summary>
/// draw the frame and then switch bufers
/// </summary>
void Game::render()
{
	m_window.clear();
	m_window.draw(m_Message);
	m_window.draw(image);

	m_window.display();
	if (image.getTexture() != &idle)
	{
		std::this_thread::sleep_for(std::chrono::seconds(1));
		image.setTexture(&idle, true);
	}
}
void Game::setupFontAndText()
{
	if (!m_ArialBlackfont.loadFromFile("ASSETS\\FONTS\\ariblk.ttf"))
	{
		std::cout << "problem loading arial black font" << std::endl;
	}
	m_Message.setFont(m_ArialBlackfont);
	m_Message.setString("W to walk\nJ to jump\nH to hammer\nD to shovel\nS to slash\nC to climb");
	m_Message.setPosition(40.0f, 40.0f);
	m_Message.setCharacterSize(25);
	m_Message.setFillColor(sf::Color::Blue);
}

void Game::setupTexture()
{
	image.setSize(sf::Vector2f(200, 200));
	image.setPosition(400, 100);
	if (!walk.loadFromFile("./ASSETS/IMAGES/walk.gif"))
	{
		std::string s("Error loading texture");
		throw std::exception(s.c_str());
	}
	if (!jump.loadFromFile("./ASSETS/IMAGES/Jump.jpg"))
	{
		std::string s("Error loading texture");
		throw std::exception(s.c_str());
	}
	if (!hammer.loadFromFile("./ASSETS/IMAGES/hammer.jpg"))
	{
		std::string s("Error loading texture");
		throw std::exception(s.c_str());
	}
	if (!slash.loadFromFile("./ASSETS/IMAGES/slash.jpg"))
	{
		std::string s("Error loading texture");
		throw std::exception(s.c_str());
	}
	if (!climb.loadFromFile("./ASSETS/IMAGES/climb.jpg"))
	{
		std::string s("Error loading texture");
		throw std::exception(s.c_str());
	}
	if (!shovel.loadFromFile("./ASSETS/IMAGES/shovel.png"))
	{
		std::string s("Error loading texture");
		throw std::exception(s.c_str());
	}
	if (!idle.loadFromFile("./ASSETS/IMAGES/idle.png"))
	{
		std::string s("Error loading texture");
		throw std::exception(s.c_str());
	}
	image.setTexture(&idle, true);
}
