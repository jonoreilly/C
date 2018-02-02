#include <stdio.h>
#include <windows.h>

int preguntar() {
	printf("dime el tamaño\n> ");
	int lado;
	scanf("%d", &lado);
	return lado;
}

void piso(int ancho) {
	char letras[3] = {'@', '.', '0'};
	int patata = 0;
	//printf("%d", patata);
	for (int m = 0; m < ancho; m++) {
		printf("%c", letras[patata]);
		//printf("*");
		patata++;
		if (patata >= 3) patata = 0;
	}
	printf("%c", letras[patata]);
	//printf("*");
	patata--;
	if (patata < 0) patata = 2;
	for (int n = 0; n < ancho; n++) {
		printf("%c", letras[patata]);
		//printf("*");
		patata--;
		if (patata < 0) patata = 2;
	}
	printf("\n");
}

void construir(int lado) {
	for (int i = 0; i < lado; i++) {
		for (int e = i; e < lado; e++) printf(" ");
		piso(i);
	}
	piso(lado);
	for (int a = 0; a < lado; a ++) {
		for (int e = lado - (a + 1); e < lado; e++) printf(" ");
		piso(lado - (a + 1));
	}
}


int main() {
	int lado = preguntar();
	construir(lado);
	system("pause");
	return 0;
}