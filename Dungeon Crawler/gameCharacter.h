#pragma once
#include <string>

#ifndef GAME_CHARACTER_H
#define GAME_CHARACTER_H



class GameCharacter
{
private:
	std::string name;

protected:
	int damage;
	int maxHealth;
	int currentHealth;

public:
	GameCharacter(std::string, int, int);
	void takeDamage(int);
	bool checkIfAlive();
	std::string getName();
	int getHealth();
	int getDamage();
};

#endif // !GAME_CHARACTER_H

