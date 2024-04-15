/*136. Escreva um programa que leia um número inteiro positivo N e calcule o seu valor
correspondente em binário.*/
#include <stdio.h>
void main(){
	int n;
	printf("informe um numero inteiro positivo: ");
	scanf("%d",&n);
	int p=1;
	int soma=0;
	while(n!=0){
		int binario=n%2;
		soma=soma+(binario*p);
		p=p*10;
		n=n/2;
	}
	printf("%d",soma);
	getch();
}
