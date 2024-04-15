/*266. Escreva um subprograma recursivo que receba como entrada um vetor de 10
números inteiros e um número inteiro N entre 1 e 10 e calcule a soma de todos os
elementos do vetor a partir da posição N.*/
#include <stdio.h>

	const int tam=10;
	
	int som(int vet[],int n){
		if(n==tam){
			return vet[n-1];
		}
		return vet[n-1] + som(vet,n+1);
	}
	
void main(){
	int vet[tam];
	int k;
	for(k=0;k<tam;k++){
		printf("informe um numero inteiro:");
		scanf("%d",&vet[k]);
	}
	int n;
	printf("informe um numero inteiro entre 1 e 10: ");
	scanf("%d",&n);
	int somaVetor=som(vet,n);
	printf("a soma dos elementos do vetor a partir da posicao %d eh %d",n,somaVetor);
	 getch();
}

