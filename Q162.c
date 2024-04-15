/*162. Escreva um programa que leia um número inteiro entre 0 e 255 e calcule o seu valor
correspondente em binário.*/
#include <stdio.h>
const int tam=8;
void main(){
	int num;
	printf("informe um numero inteiro entre 0 e 255: ");
	scanf("%d",&num);
	int binario=num;
	int vet[tam];
	int k;
	for(k=0;k<tam;k++){
		int resto=binario%2;
		vet[k]=resto;
		binario=binario/2;
	}
	int aux=0;
	printf("o numero inteiro %d em binario eh: \n",num);
	for(k=0;k<tam/2;k++){
		aux=vet[k];
		vet[k]=vet[tam-k-1];
		vet[tam-k-1]=aux;
	}
	for(k=0;k<tam;k++){
		printf("%d",vet[k]);
	}
	getch();
}
