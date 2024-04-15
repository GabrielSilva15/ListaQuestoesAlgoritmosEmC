/* 268. Escreva um subprograma recursivo que receba como entrada um vetor de 10
números inteiros e um número inteiro N entre 1 e 10 e verifique quantos números
pares existem a partir da posição N do vetor.*/
#include <stdio.h>
	const int tam=10;
int par(int vet[],int n){
	if(tam==n && vet[n-1]%2==0){
		return 1;
	}
	else if(vet[n-1]%2==0){
		return 1 + par(vet,n+1);
	}
	return par(vet,n+1);
}
void main(){
	int vet[tam];
	int k;
	for(k=0;k<tam;k++){
		printf("informe um numero inteiro: ");
		scanf("%d",&vet[k]);
	}
	int n;
	printf("informe um numero inteiro entre 1 e 10:  ");
	scanf("%d",&n);
	int pares=par(vet,n);
	printf("os numeros pares a partir da posicao %d eh %d",n,pares);

	 getch();
}

