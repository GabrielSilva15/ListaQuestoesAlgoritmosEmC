/*167. Escreva um programa que leia um vetor de dez números inteiros e ordene o vetor
lido em ordem crescente.*/
#include <stdio.h>
const int tam=10;
void main(){
	int vet[tam];
	int k;
	int j;
	int aux=0;
	for(k=0;k<tam;k++){
		printf("informe um numero inteiro: ");
		scanf("%d",&vet[k]);
	}
	
	for(k=0;k<tam;k++){
		for(j=k+1;j<tam;j++){
			if(vet[j]<vet[k]){
				aux=vet[k];
				vet[k]=vet[j];
				vet[j]=aux;
			}
		}
	}
	
	
	for(k=0;k<tam;k++){
		printf("%d ",vet[k]);
	}
}
