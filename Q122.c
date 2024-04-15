/*122. Escreva um programa que leia um número inteiro N e verifique se ele pertence à série
de Fibonacci.*/
#include <stdio.h>
void main(){
	int n;
	printf("informe um numero inteiro:");
	scanf("%d",&n);
	int penultimo=0;
	int ultimo=0;
	int prox=1;
	while(prox<=n){
		if(prox==n){
			printf("o numero %d pertence a serie fibonnaci",n);
		}
		penultimo=ultimo;
		ultimo=prox;
		prox=penultimo+ultimo;
	}
	if(prox>n)
	{
		printf("o numero %d nao pertence a serie fibonnaci",n);
	}
	getch();
}
