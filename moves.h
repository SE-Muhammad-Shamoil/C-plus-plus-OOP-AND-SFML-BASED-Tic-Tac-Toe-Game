#include <SFml/Graphics.hpp>

class moves
{
protected:
    sf::RectangleShape shape;
    sf::Texture sh_tex;
public:
    moves():shape(sf::Vector2f(250,250)){}
    virtual void setpos(sf::Vector2f CenPos);
};

class cross : moves
{       
private:
public:
    cross()
    {
        sh_tex.loadFromFile("cross.png");
        shape.setTexture(&sh_tex);
    }

    void setpos(sf::Vector2f CenPos)
    {
        shape.setPosition(CenPos);
    }
    
};

class tick:moves
{
private:
public:
    tick()
    {
        sh_tex.loadFromFile("tick.png");
        shape.setTexture(&sh_tex);
    }

    void setpos(sf::Vector2f CenPos)
    {
        shape.setPosition(CenPos);
    }
};