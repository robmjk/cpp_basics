#include <iostream>
#include "player.h"

using namespace std;

int main()
{
	player mainPlayer;

	mainPlayer.setPlayerName("big timmy");

	cout << mainPlayer.playerNameOutput() << endl;

	cout << "Getting Player Name: " << mainPlayer.getPlayerName() << endl;

	return 0;
}