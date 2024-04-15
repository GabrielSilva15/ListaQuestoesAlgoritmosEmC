/*155. Escreva um programa que leia dez números inteiros e, após finalizar a leitura, leia um
número inteiro N (entre 1 e 10) e imprima qual foi o enésimo número digitado pelo
usuário.*/
#include <stdio.h>
const int tam=10;
void main(){
	int vet[tam];
	int k;
	for(k=0;k<tam;k++){
		printf("informe um numero inteiro: ");
		scanf("%d",&vet[k]);
	}
	int n;
	printf("informe um numero inteiro entre 1 e 10: ");
	scanf("%d",&n);
	
	printf("o enesimo numero digitado pelo usuario foi %d",vet[n-1]);
	getch();
}
