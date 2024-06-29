#include <iostream>
#include <SFML/graphics.hpp>
#include <vector>
using namespace std;

class Move //(Tick/cross)
{
private:
    sf::RectangleShape shape;

public:
    Move(sf::Vector2f Pos, sf::Texture txt)
    {
        shape.setTexture(&txt);
        shape.setPosition(Pos);
        shape.setSize(sf::Vector2f(50, 50));
    }
    void Draw(sf::RenderWindow &win)
    {
        win.draw(shape);
    }
};

class Game
{
    sf::Window window;
    sf::RectangleShape background;
    vector<Move> moves;
};

class Menu
{
    private:
    Game game;
};

int main()
{
    cout << "Hello";
}