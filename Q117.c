/*117. Escreva um programa que leia 10 números inteiros e, para cada número lido, calcule o
seu fatorial.*/
#include <stdio.h>
void main(){
	int num;
	int k;
	int l;
	int fatorial;
	for(k=1;k<=10;k++){
		fatorial=1;
		printf("informe um numero: ");
		scanf("%d",&num);
		for(l=2;l<=num;l++){
			fatorial=fatorial*l;
		}
		printf("o fatorial do numero %d eh %d\n",num,fatorial);
	}
	getch();
}
