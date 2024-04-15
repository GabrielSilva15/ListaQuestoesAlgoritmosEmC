/*158. Escreva um programa que leia um vetor de 10 números inteiros e, após terminar a
leitura, imprima todos os elementos do vetor que são maiores do que a média
aritmética de todos os elementos do vetor.*/
#include <stdio.h>
const int tam=10;
void main(){
	int vet[tam];
	int k;
	for(k=0;k<tam;k++){
		printf("informe um numero inteiro: ");
		scanf("%d",&vet[k]);
	}
	int soma=0;
	for(k=0;k<tam;k++){
		soma=soma+vet[k];
	}
	int media=soma/tam;
	
	printf("os elementos do vetor que sao maiores que a media aritmetica dos elementos do vetor:\n");
	for(k=0;k<tam;k++){
		if(media<vet[k]){
			printf("%d ",vet[k]);
		}
	}
	getch();
}
