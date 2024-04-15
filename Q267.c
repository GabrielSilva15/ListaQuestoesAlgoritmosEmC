/*267. Escreva um subprograma recursivo que receba como entrada um vetor de 10
números inteiros, um número inteiro N entre 1 e 10 e um número inteiro X e
verifique quantas vezes o número X aparece no vetor a partir da posição N. */
#include <stdio.h>
	const int tam=10;
	int aparece(int vet[],int n,int x){
		if(n==tam){
			if(vet[n-1]==x){
				return 1;
			}
		}
		
		if(vet[n-1]==x){
			return 1 + aparece(vet,n+1,x);
		}
	}

void main(){
	int vet[tam];
	int k;
	for(k=0;k<tam;k++){
		printf("informe um numero inteiro:");
		scanf("%d",&vet[k]);
	}
	int n;
	printf("informe um numero entre 1 e 10: ");
	scanf("%d",&n);
	int x;
	printf("informe um numero para verificar quantas vezes ele aparece no vetor a partir da posicao %d: ",n);
	scanf("%d",&x);
	int Apareceu=aparece(vet,n,x);
	printf("o numero %d apareceu %d vezes no vetor a partir da posicao %d",x,Apareceu,n);

	 getch();
}

