/*119. Escreva um programa que leia um n�mero inteiro N e imprima todos os termos da
s�rie de Fibonacci que s�o menores ou iguais a N.*/
#include <stdio.h>
void main(){
	int n;
	printf("informe um numero inteiro: ");
	scanf("%d",&n);
	int penultimo=0;
	int ultimo=0;
	int proximo=1;
	while(proximo<=n){
		printf("%d ", proximo);
		penultimo=ultimo;
		ultimo=proximo;
		proximo=penultimo+ultimo;
	}
}
