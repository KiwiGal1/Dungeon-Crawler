#pragma once
#include "gameCharacter.h"
#include "Room.cpp"

#ifndef PLAYER_H
#define PLAYER_H


class Player: public GameCharacter
{
private:
	room* previousRoom;

public:
	room* currentRoom;

	Player(std::string, int, int);
	void heal(int);
	void moveToRoom(room*);
	void retreat();
	void pickUpItem(item);
};

#endif // !PLAYER_H

