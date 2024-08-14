#include <stdio.h>

int main() {
	int idade;
	char nome[40];
	
	printf("Qual o seu nome?\n ");
	scanf("%s", &nome);
	printf("Qual a sua idade? ");
	scanf("%d", &idade);
	printf("Olá %s, você tem %d anos.",nome,idade);
	
	return 0;
}
