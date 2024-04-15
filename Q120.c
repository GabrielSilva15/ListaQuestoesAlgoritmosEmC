/*120. Escreva um programa que leia um número inteiro positivo N e imprima a maior
quantidade possível de números inteiros positivos de forma que a soma de todos os
números impressos seja menor ou igual a N.*/
#include <stdio.h>
void main(){
	int n;
	printf("informe um numero inteiro positivo: ");
	scanf("%d",&n);
	int soma=0;
	int n2=0;
	while(soma<=n){
		if(n2>0){
		printf("%d\n",n2);
		}
		printf("informe um numero inteiro positivo: ");
		scanf("%d",&n2);
		soma=soma +n2;
	}
}
