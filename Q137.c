/*137. Escreva um programa que leia um n�mero inteiro positivo e calcule o n�mero de
algarismos deste n�mero.*/
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
