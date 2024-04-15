/*156. Escreva um programa que leia um vetor de 10 números inteiros e, após terminar a
leitura, leia um número inteiro N e imprima todos os elementos do vetor que são
maiores que N.*/
#include <stdio.h>
const tam=10;
void main(){
	int vet[tam];
	int k;
	for(k=0;k<tam;k++){
		printf("informe um numero inteiro: ");
		scanf("%d",&vet[k]);
	}
	int n;
	printf("informe um numero inteiro: ");
	scanf("%d",&n);
	
	for(k=0;k<tam;k++){
		if(vet[k]>n){
			printf("%d ",vet[k]);
		}
	}
	getch();
}
