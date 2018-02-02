#include <iostream>
/*
void printnum ( float number ) {

	std::cout << number << std::endl;

}

void getn() {

	int caca;
	std::cin >> caca;

}

int main() {

	std::cout << "patata" << std::endl;
	printnum(18);
	getn();

}*/


/*
class cosa 
{
public:
	int a = 3, b = 0, c = 1;

	void imprimir() {
		std::cout << a << std::endl;
	}

	void popo(int num) {
		a = num;
		imprimir();
	}
};


int main()
{
	cosa patata;
	patata.imprimir();
	patata.popo(5);
	std::cin.get();
	return 0;
}

*/

int * returnarr() 
{
	static int myarr[20];
	for (int i = 0; i < 20; i++)
	{
		myarr[i] = i;
	}
	return myarr;
}

int main() 
{
	int * pointer;
	pointer = returnarr();
	int value[] = { *pointer , *(pointer+1), *(pointer+2)};
	std::cout << value[2] << std::endl;
	std::cin.get();
	return 0;
}