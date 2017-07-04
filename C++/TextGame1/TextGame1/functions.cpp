#include <iostream>
#include <stdlib.h>
#include <time.h>

#include "gamelinks.h"



void write(const char* name, warrior mob)
{
	std::cout << name << std::endl << " HP : " << mob.hp << std::endl << " MP : " << mob.mana  << std::endl << std::endl;
}

void printmoves(int mana)
{
	if (mana <= 80)
	{
		std::cout << " 0 -> Recharge" << std::endl;
	}

	if (mana >= 20)
	{
		std::cout << " 1 -> Attack" << std::endl << " 2 -> Defend" << std::endl;
	}
}



void refresh(warrior mob1, warrior mob2)
{
	system("cls");
	write("player", mob1);
	write("enemy", mob2);
}

void movement(warrior& player, warrior& enemy)
{
	srand(time(NULL));

	if (enemy.mana > 75)
	{
		enemy.move = rand() % 2 + 1;
	}
	else if (enemy.mana < 20) { enemy.move = rand() % 2; }
	else { enemy.move = rand() % 3; }

	if (player.move == 0) { player.mana += 25; if (player.mana > 100) { player.mana = 100; } }
	if (enemy.move == 0) { enemy.mana += 25; }
	if ((player.move == 1) && (enemy.move != 2))	{enemy.hp -= 25;	player.mana -= 15;}
	else if (player.move == 1)	{player.mana -= 50;}
	if ((enemy.move == 1) && (player.move != 2)) { player.hp -= 25; enemy.mana -= 15; }
	else if (enemy.move == 1)	{enemy.mana -= 35; }
	if (player.move == 2) { player.mana -= 20; }
	if (enemy.move == 2) { enemy.mana -= 20; }

	if (player.mana < 0) { player.hp += player.mana; player.mana = 0; }
	if (enemy.mana < 0) { enemy.hp += enemy.mana; enemy.mana = 0; }
}


void relaymessage(warrior mover)
{
	if (mover.move == 0)
	{
		std::cout << "enemy recharged" << std::endl;
	}
	else if (mover.move == 1)
	{
		std::cout << "enemy attacked" << std::endl;
	}
	else if (mover.move == 2)
	{
		std::cout << "enemy defended" << std::endl;
	}
}

int cinput(int min, int max)
{
	int value = -1;
	std::cin >> value;
	while ((value < min) || (max < value))
	{
		if ((value < min) || (max < value))
		{
			std::cout << "entre el 0 y el 2" << std::endl;
		}
		std::cin >> value;
	}
	return value;
}