#include <SFML/Graphics.hpp>
#include <sfml/Audio.hpp>
#include "game.h"

class menu
{
private:
    game Game;
    sf::RenderWindow window;
    sf::Texture bg_tex;
    sf::RectangleShape bg;

public:
    menu() : window(sf::VideoMode(1020, 1020), "Tic Tac Toe", sf::Style::Default)
    {

    }

    void start()
    {
    }
};