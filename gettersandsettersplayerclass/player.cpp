#include <iostream>
#include "player.h"

using namespace std;

player::player()
{
	playerName;
}

string player::playerNameOutput()
{
	return "Original Player's Name: " + playerName;
}

void player::setPlayerName(string newPlayerName)
{
	playerName = "little timmy";
}

string player::getPlayerName()
{
	return playerName;
}


