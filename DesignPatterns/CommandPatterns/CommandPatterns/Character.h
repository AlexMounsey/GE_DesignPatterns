#pragma once
#include <iostream>

class Character
{
public:
	Character();
	~Character();
	void jump();
	void moveLeft();
	void moveRight();
	void Crouch();
};
Character::Character()
{

}
Character::~Character()
{

}
void Character::jump()
{
	printf("Jumping \n");
}
void Character::Crouch()
{
	printf("Crouch \n");
}
void Character::moveLeft()
{
	printf("Left \n");
}
void Character::moveRight()
{
	printf("Right \n");
}

