/*137. Escreva um programa que leia um número inteiro positivo e calcule o número de
algarismos deste número.*/
#include <stdio.h>
void main(){
	int n;
	printf("informe um numero inteiro positivo: ");
	scanf("%d",&n);
	int cont=0;
	while(n!=0){
		n=n/10;
		cont++;
	}
	printf("o numero tem %d algarismos",cont);
	getch();
}
