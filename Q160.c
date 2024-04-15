/*160. Escreva um programa que leia um vetor de 10 números inteiros e inverta todos os
elementos do vetor. O programa deve ser resolvido com a utilização de apenas um
vetor.*/
#include <stdio.h>
const int tam=10;
void main(){
	int vet[tam];
	int  k;
	for(k=0;k<tam;k++){
		printf("informe um numero inteiiro: ");
		scanf("%d",&vet[k]);
	}
	printf("o vetor antes: \n");
	for(k=0;k<tam;k++){
		printf("%d ",vet[k]);
	}
	int aux=0;
	for(k=0;k<tam/2;k++){
		aux=vet[k];
		vet[k]=vet[tam-k-1];
		vet[tam-k-1]=aux;
	}
	printf("\no vetor depois da inversao: \n");
	for(k=0;k<tam;k++){
		printf("%d ",vet[k]);
	}
	getch();
}
