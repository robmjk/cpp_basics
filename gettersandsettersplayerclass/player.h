#pragma once

#include <iostream>

using namespace std;

class player
{
private:
	string playerName;

public:
	player();
	string playerNameOutput();
	void setPlayerName(string playerName);
	string getPlayerName();
};

