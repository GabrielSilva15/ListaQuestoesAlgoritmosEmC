/*157. Escreva um programa que leia um vetor de 10 n�meros inteiros e, ap�s terminar a
leitura, leia um n�mero inteiro N e imprima todas as posi��es em que o n�mero N
aparece dentro do vetor.*/
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
	printf("informe um numero inteiro: ");
	scanf("%d",&n);
	for(k=0;k<tam;k++){
		if(vet[k]==n){
			printf("%d ",k);
		}
	}
	getch();
}
