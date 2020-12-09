#include "nong.h"

nong::nong(sf::Texture* texture, sf::Vector2u imageCount, float switchTime, float speed):
	animation(texture,imageCount,switchTime)
{
	this->speed = speed;
	//this->jumpHeight = jumpHeight;
	row = 0;
	faceRight = true;

	body.setSize(sf::Vector2f(100.0f, 100.0f));
	body.setOrigin(body.getSize()/2.0f);
	body.setPosition(550.0f, 550.0f);
	body.setTexture(texture);
}

nong::~nong()
{
}

void nong::Update(float deltaTime)
{
	const float gravity = 1;
	int jumpHeight = 300;
	sf::Vector2f velocity(sf::Vector2f(0, 0));
	float jumpSpeed = 200.0f;
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		velocity.x -= speed * deltaTime;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{
		velocity.x += speed * deltaTime;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space) and canJump)
	{
		canJump = false;
		velocity.y -= jumpHeight;
	}
	if (body.getPosition().y + body.getSize().y < 650 || velocity.y < 0 )
	{
		velocity.y += gravity;
	}
	/*std::cout << "ook" << std::endl;
	if (body.getPosition().y + body.getSize().y == 500&& body.getPosition().x>=0&& body.getPosition().y<=200 || velocity.y < 0)
	{
		std::cout << "kao" << std::endl;
		body.setPosition(body.getPosition().x,400);
		//canJump = false;
	}*/
	else
	{
		body.setPosition(body.getPosition().x, 650 - body.getSize().y);
		velocity.y = 0;
		canJump = true;
	}
	body.move(velocity.x, velocity.y);
	
	if (velocity.x == 0.0f)
	{
		for (int k = 0; k <= 1; k++)
		{
			row = k;
		}
	}
	if (velocity.y == 1.0f)
	{
		for (int j = 5; j <= 6; j++)
		{
			row = j;
		}
	}
	else
	{
		if (velocity.x != 0.0f && velocity.y == 0.0f)
		{
			for (int i = 2; i <= 4; i++)
			{
				row = i;
			}
		}
		
		if (velocity.x > 0.0f)
		{
			faceRight = true;
		}
		else
		{
			faceRight = false;
		}
	}
	animation.Update(row, deltaTime, faceRight);
	body.setTextureRect(animation.uvRect);
}

/*void nong::OnCollision(sf::Vector2f direction)
{
	if (direction.x < 0.0f)
	{
		//Collision on the left.
		velocity.x = 0.0f;
	}
	else if(direction.x > 0.0f)
	{
		//Collision on the right.
		velocity.x = 0.0f;
	}
	if (direction.y < 0.0f)
	{
		//Collision on the bottom.
		velocity.y = 0.0f;
		canJump = true;
	}
	else if (direction.y > 0.0f)
	{
		//Collision on the top.
		velocity.y = 0.0f;
	}
}*/

void nong::Draw(sf::RenderWindow& window)
{
	window.draw(body);
}
