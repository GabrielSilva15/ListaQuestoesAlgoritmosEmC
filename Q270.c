/* 270. Escreva um subprograma recursivo que receba como entrada dois vetores de 10
números inteiros cada e um número inteiro N e verifique se os dois vetores são
idênticos a partir da posição N.*/
#include <stdio.h>
const int tam=10;
int iguais(int vet[],int vet2[],int n){
	if(n==tam){
		if(vet[n-1]==vet2[n-1]){
			return 1;
		}
		return 0;
	}
	
	if(vet[n-1]==vet2[n-1]){
		return 1 + iguais(vet,vet2,n+1);
	}
	return 0;
}

void main(){
	int vet[tam];
	int vet2[tam];
	int k;
	for(k=0;k<tam;k++){
		printf("informe um numero inteiro: ");
		scanf("%d",&vet[k]);
	}
	for(k=0;k<tam;k++){
		printf("informe um numero inteiro: ");
		scanf("%d",&vet2[k]);
	}
	int n;
	printf("informe um numero inteiro:");
	scanf("%d",&n);
	int VetIguais=iguais(vet,vet2,n);
	if(VetIguais-1==tam-n){
		printf("os vetores sao identicos a partir da posicao %d",n);
	}
	else{
		printf("os vetores nao sao identicos a partir da posicao %d",n);
	}
	

	 getch();
}

