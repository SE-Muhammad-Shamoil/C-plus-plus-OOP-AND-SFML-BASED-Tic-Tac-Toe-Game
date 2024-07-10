#include <SFMl/Graphics.hpp>
#include <sfml/Audio.hpp>
#include <iostream>
#include "moves.h"
using namespace std;

class game
{
private:
    sf::RenderWindow window;
    sf::RectangleShape Background;
    sf::Texture Bg_tex;
public:
    game()
    {

    }

    void play(sf::RenderWindow &window)
    {
        while(window.isOpen())
        {
            sf::Event evnt;
            while(window.pollEvent(evnt))
            {
                switch(evnt.type)
                {
                    case sf::Event::Closed:
                        window.close();
                }
            }
            window.clear(sf::Color::Magenta);
            window.display();
        }
    }
};