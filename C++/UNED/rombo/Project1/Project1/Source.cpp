//#include <iostream>
#define _CRT_NONSTDC_NO_WARNINGS
#include <stdio.h>


void printnum(float number) {
	//std::cout << number << std::endl;
	int num = int(number);
	printf("%d \n", num);
}

void getn() {
	int caca;
	//std::cin >> caca;
	scanf("%d", &caca);
}

int main() {
	//std::cout << "patata" << std::endl;
	printf("patata");
	printnum(18);
	getn();
}
