#include <SFML/Graphics.hpp>
#include <sfml/Audio.hpp>
#include "game.h"

class menu
{
private:
    game Game;
    sf::RenderWindow window;
    sf::Texture bg_tex;
    sf::RectangleShape mbg;
    sf::Sprite play;
    sf::Texture play_tex;

public:
    menu() : window(sf::VideoMode(950, 800), "Tic Tac Toe", sf::Style::Default),mbg(sf::Vector2f(950,800))
    {
        bg_tex.loadFromFile("graphics/menu_bg.png");
        play_tex.loadFromFile("graphics/play.png");
        mbg.setTexture(&bg_tex);
        play.setTexture(play_tex);
        play.setPosition(310,300);
    }

    void start()
    {
        while (window.isOpen())
        {
            sf::Event evnt;
            while (window.pollEvent(evnt))
            {
                switch (evnt.type)
                {
                case sf::Event::Closed:
                    window.close();
                case sf::Event::MouseButtonPressed:
                    if (play.getGlobalBounds().contains(static_cast<sf::Vector2f>(sf::Mouse::getPosition(window))))
                    Game.play(window);
                }

                window.draw(mbg);
                window.draw(play);
                window.display();
            }
        }
    }
};