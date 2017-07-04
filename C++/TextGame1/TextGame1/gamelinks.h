#pragma once
#include "classes.h"



void write(const char* name, warrior mob);
void refresh(warrior mob1, warrior mob2);
void printmoves(int mana);
void movement(warrior& player, warrior& enemy);
void relaymessage(warrior mover);
int cinput(int min, int max);


//mob types:

//#define mob1[] {100, 8, 30};
//#define mob2[] {100, 5, 10};