#include <SFML/Graphics.hpp>
#include<iostream>
#include "nong.h"
#include "Platform.h"

/*static const float VIEW_HEIGHT = 766.0f;

void ResizeView(const sf::RenderWindow& window, sf::View& view)
{
	float aspectRadio = float(window.getSize().x) / float(window.getSize().y);
	view.setSize(VIEW_HEIGHT*aspectRadio, VIEW_HEIGHT);
}*/

int main()
{
	sf::RenderWindow window(sf::VideoMode(1149, 766), "Girl Jump!", sf::Style::Close | sf::Style::Resize);
	//sf::View view(sf::Vector2f(0.0f, 0.0f), sf::Vector2f(VIEW_HEIGHT, VIEW_HEIGHT));

	//--------------------------------------------------------------------------------------คะแนน---------------------------------------------------------
	sf::Texture tabb;
	sf::RectangleShape tab(sf::Vector2f(1149, 50));
	tab.setPosition(0, 0);
	tab.setFillColor(sf::Color::Black);
	tab.setTexture(&tabb);
	sf::Font score;
	score.loadFromFile("character/DRkami.ttf");
	sf::Text colorsc;
	colorsc.setFont(score);
	colorsc.setCharacterSize(30);
	int num = 0;

	//---------------------------------------------------------------------------------------สร้างตัวละครหลัก-------------------------------------------------------------------------------------------------
	sf::Texture texture;
	texture.setRepeated(true);
	texture.setSmooth(true);
	texture.loadFromFile("character/run.png");
	nong Nong(&texture, sf::Vector2u(8, 7), 0.05f, 200.0f);

	//---------------------------------------------------------------------------------------บล็อกไม้-------------------------------------------------------------------------------------------------
	sf::Texture box1;
	box1.loadFromFile("character/tile-1.png");
	sf::Sprite boxx1(box1);
	sf::RectangleShape mai1(sf::Vector2f(200, 50));
	mai1.setPosition(0.0f, 500.0f);
	mai1.setTexture(&box1);

	sf::Texture box2;
	box2.loadFromFile("character/tile-1.png");
	sf::Sprite boxx2(box2);
	sf::RectangleShape mai2(sf::Vector2f(180, 50));
	mai2.setPosition(350.0f, 300.0f);
	mai2.setTexture(&box1);

	sf::Texture box3;
	box3.loadFromFile("character/tile-1.png");
	sf::Sprite boxx3(box3);
	sf::RectangleShape mai3(sf::Vector2f(120, 50));
	mai3.setPosition(400.0f, 170.0f);
	mai3.setTexture(&box3);

	sf::Texture box4;
	box4.loadFromFile("character/tile-1.png");
	sf::Sprite boxx4(box4);
	sf::RectangleShape mai4(sf::Vector2f(200, 50));
	mai4.setPosition(600.0f, 430.0f);
	mai4.setTexture(&box4);

	sf::Texture box5;
	box5.loadFromFile("character/tile-1.png");
	sf::Sprite boxx5(box5);
	sf::RectangleShape mai5(sf::Vector2f(190, 50));
	mai5.setPosition(720.0f, 380.0f);
	mai5.setTexture(&box5);

	sf::Texture box6;
	box6.loadFromFile("character/tile-1.png");
	sf::Sprite boxx6(box6);
	sf::RectangleShape mai6(sf::Vector2f(175, 50));
	mai6.setPosition(810.0f, 260.0f);
	mai6.setTexture(&box6);

	sf::Texture box7;
	box7.loadFromFile("character/tile-1.png");
	sf::Sprite boxx7(box7);
	sf::RectangleShape mai7(sf::Vector2f(150, 50));
	mai7.setPosition(1000.0f, 100.0f);
	mai7.setTexture(&box7);

	Platform platform1(nullptr, sf::Vector2f(190.0f, 3.0f), sf::Vector2f(100.0f, 500.0f));
	Platform platform2(nullptr, sf::Vector2f(172.0f, 3.0f), sf::Vector2f(440.0f, 300.0f));
	Platform platform3(nullptr, sf::Vector2f(117.0f, 3.0f), sf::Vector2f(460.0f, 170.0f));
	Platform platform4(nullptr, sf::Vector2f(197.0f, 3.0f), sf::Vector2f(700.0f, 430.0f));
	Platform platform5(nullptr, sf::Vector2f(185.0f, 3.0f), sf::Vector2f(815.0f, 380.0f));
	Platform platform6(nullptr, sf::Vector2f(170.0f, 3.0f), sf::Vector2f(900.0f, 260.0f));
	Platform platform7(nullptr, sf::Vector2f(145.0f, 3.0f), sf::Vector2f(1075.0f, 100.0f));

	//---------------------------------------------------------------------------------------สร้าง background หน้าแรก------------------------------------------------------------------------------------
	sf::Texture first;
	first.loadFromFile("character/bg_start.png");
	sf::Sprite f(first);
	sf::RectangleShape grob1(sf::Vector2f(1149, 766));
	grob1.setPosition(0.0f, 0.0f);
	grob1.setTexture(&first);

	sf::Texture start1;
	start1.loadFromFile("character/button_start.png");
	sf::Sprite st1(start1);
	sf::RectangleShape stt1(sf::Vector2f(250, 100));
	stt1.setPosition(280.0f, 620.0f);
	stt1.setTexture(&start1);

	sf::Texture start2;
	start2.loadFromFile("character/score_start.png");
	sf::Sprite st2(start2);
	sf::RectangleShape stt2(sf::Vector2f(250, 100));
	stt2.setPosition(550.0f, 620.0f);
	stt2.setTexture(&start2);

	sf::Texture start3;
	start3.loadFromFile("character/exit_start.png");
	sf::Sprite st3(start3);
	sf::RectangleShape stt3(sf::Vector2f(250, 100));
	stt3.setPosition(820.0f, 620.0f);
	stt3.setTexture(&start3);

	sf::Texture start11;
	start11.loadFromFile("character/button_start2.png");
	sf::Sprite st11(start11);
	sf::RectangleShape stt11(sf::Vector2f(250, 100));
	stt11.setPosition(280.0f, 620.0f);
	stt11.setTexture(&start11);

	sf::Texture start12;
	start12.loadFromFile("character/score_start2.png");
	sf::Sprite st12(start12);
	sf::RectangleShape stt12(sf::Vector2f(250, 100));
	stt12.setPosition(550.0f, 620.0f);
	stt12.setTexture(&start12);

	sf::Texture start13;
	start13.loadFromFile("character/exit_start2.png");
	sf::Sprite st13(start13);
	sf::RectangleShape stt13(sf::Vector2f(250, 100));
	stt13.setPosition(820.0f, 620.0f);
	stt13.setTexture(&start13);

	//---------------------------------------------------------------------------------------สร้าง background หน้าเกม------------------------------------------------------------------------------------
	sf::Texture bg;
	bg.loadFromFile("character/b.png");
	sf::Sprite bgg(bg);
	sf::RectangleShape grob(sf::Vector2f(1149, 766));
	grob.setPosition(0.0f, 0.0f);
	grob.setTexture(&bg);

	//---------------------------------------------------------------------------------------หน้าแรก------------------------------------------------------------------------------------

	while (window.isOpen())
	{
		window.draw(grob1);
		window.draw(stt1);
		window.draw(stt2);
		window.draw(stt3);
		sf::Mouse::getPosition(window);
		if ((sf::Mouse::getPosition(window).x >= 558) && (sf::Mouse::getPosition(window).x <= 790)
			&& (sf::Mouse::getPosition(window).y >= 626) && (sf::Mouse::getPosition(window).y <= 711))
		{
			window.draw(stt12);
		}
		else if ((sf::Mouse::getPosition(window).x >= 829) && (sf::Mouse::getPosition(window).x <= 1062)
			&& (sf::Mouse::getPosition(window).y >= 626) && (sf::Mouse::getPosition(window).y <= 711))
		{
			window.draw(stt13);
		}
		else if ((sf::Mouse::getPosition(window).x >= 287) && (sf::Mouse::getPosition(window).x <= 521)
			&& (sf::Mouse::getPosition(window).y >= 626) && (sf::Mouse::getPosition(window).y <= 711))
		{
			window.draw(stt11);
		}
		sf::Event event1;
		//std::cout << "x: " << sf::Mouse::getPosition(window).x << "     y: " << sf::Mouse::getPosition(window).y << std::endl;
		while (window.pollEvent(event1))
		{
			switch (event1.type)
			{
				case sf::Event::Closed:
					window.close();
					break;
				case sf::Event::MouseButtonPressed:
					if (event1.mouseButton.button == sf::Mouse::Left)
					{
						if ((sf::Mouse::getPosition(window).x >= 558) && (sf::Mouse::getPosition(window).x <= 790)
							&& (sf::Mouse::getPosition(window).y >= 626) && (sf::Mouse::getPosition(window).y <= 711))
						{
							//goto SCORE; //score
						}
						else if ((sf::Mouse::getPosition(window).x >= 829) && (sf::Mouse::getPosition(window).x <= 1062)
							&& (sf::Mouse::getPosition(window).y >= 626) && (sf::Mouse::getPosition(window).y <= 711))
						{
							window.close();
							break;
						}
						else if ((sf::Mouse::getPosition(window).x >= 287) && (sf::Mouse::getPosition(window).x <= 521)
							&& (sf::Mouse::getPosition(window).y >= 626) && (sf::Mouse::getPosition(window).y <= 711))
						{
							goto GAME;
						}
					}
			}
		}
		window.display();
	}

	//---------------------------------------------------------------------------------------หน้าเกม------------------------------------------------------------------------------------
	{GAME:
		float deltaTime = 0.0f;
		sf::Clock clock; 
		while (window.isOpen())
		{
			deltaTime = clock.restart().asSeconds();

			/*if (deltaTime > 1.0f / 20.0f)
			{
				deltaTime = 1.0f / 20.0f;
			}*/

			sf::Event event;
			while (window.pollEvent(event))
			{
				switch (event.type)
				{
				case sf::Event::Closed:
					window.close();
					break;
				}
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
				{
					window.close();
					break;
				}
			}

			Nong.Update(deltaTime);

			/*sf::Vector2f direction;

			for (Platform& platform : platforms)
			{
				if (platform.GetCollider().CheckCollision(nong.GetCollider(), direction, 1.0f))
				{
					nong.OnCollision(direction);
				}
			}*/

			//view.setCenter(nong.GetPosition());
			//window.setView(view);

			window.draw(grob);		//-------วาดพื้นหลังเกม--------------
			window.draw(tab);		//-------วาดแถบดำ------------------
			window.draw(mai1);		//-----วาดบล็อกไม้-----------------
			window.draw(mai2);
			window.draw(mai3);
			window.draw(mai4);
			window.draw(mai5);
			window.draw(mai6);
			window.draw(mai7);

			Nong.Draw(window);		//--------วาดน้อง-----------

			colorsc.setPosition(0, 0);								//-------วาดคะแนน--------
			window.draw(colorsc);
			colorsc.setString("Scores: " + std::to_string(num));
			
			platform1.GetCollider().CheckCollision(Nong.GetCollider(), 1.0f);
			platform2.GetCollider().CheckCollision(Nong.GetCollider(), 1.0f);
			platform3.GetCollider().CheckCollision(Nong.GetCollider(), 1.0f);
			platform4.GetCollider().CheckCollision(Nong.GetCollider(), 1.0f);
			platform5.GetCollider().CheckCollision(Nong.GetCollider(), 1.0f);
			platform6.GetCollider().CheckCollision(Nong.GetCollider(), 1.0f);
			platform7.GetCollider().CheckCollision(Nong.GetCollider(), 1.0f);

			platform1.Draw(window);
			platform2.Draw(window);
			platform3.Draw(window);
			platform4.Draw(window);
			platform5.Draw(window);
			platform6.Draw(window);
			platform7.Draw(window);
			
			window.display();		//---------เคลียร์หน้า-----------------

			
		}
	}
    return 0;
}