#include <iostream>
#include <stdlib.h>

#include "gamelinks.h"


int main()
{
	warrior player;
	warrior enemy;
	
	while (true)
	{
		refresh(player, enemy);
		if ((player.hp <= 0) || (enemy.hp <= 0)) { break; }
		printmoves(player.mana);
		relaymessage(enemy);
		player.move = cinput(0, 2);
		movement(player, enemy);
	}
	if ((player.hp <= 0) && (enemy.hp <= 0)) { std::cout << "empate" << std::endl; }
	else if (player.hp <= 0) { std::cout << "perdiste" << std::endl; }
	else { std::cout << "VICTORIA" << std::endl; }

	while (true)
	{
		int exit = -1;
		std::cout << "0 pa salir" << std::endl;
		std::cin >> exit;
		if (exit == 0) { break; }
	}
}