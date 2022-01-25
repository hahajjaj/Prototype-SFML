#include <iostream>
#include <SFML/Graphics.hpp>

int main()
{
    sf::Event evenement;

    sf::RenderWindow fenetre(sf::VideoMode(1280, 720), "Prototype", sf::Style::Close);
    fenetre.setFramerateLimit(60);

    

    while (fenetre.isOpen())
    {
        while (fenetre.pollEvent(evenement))
        {
            switch(evenement.type)
            {
                case sf::Event::Closed:
                {
                    fenetre.close();
                    break;
                }
                case sf::Event::KeyPressed:
                {
                    switch (evenement.key.code)
                    {
                        case sf::Keyboard::Q:
                        {
                            fenetre.close();
                        }
                    }
                }
            }
        }
        fenetre.display();
    }

    return 0;
}