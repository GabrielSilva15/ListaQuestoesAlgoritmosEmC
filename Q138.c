/*138. Escreva um programa que leia um número inteiro positivo e calcule a soma de todos
os seus algarismos.*/
#include <stdio.h>
void main(){
	int n;
	printf("informe um numero inteiro positivo: ");
	scanf("%d",&n);
	int soma=0;
	do{
		n=n/10;
		soma=soma+n%10;
	}
	while(n!=0);
	printf("%d",soma);
	getch();
}
