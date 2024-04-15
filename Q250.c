/*250. Escreva um programa que leia cinco números inteiros e determine o segundo maior
número digitado pelo usuário e a ordem em que o mesmo foi digitado. Esta
verificação deve ser realizada através de um subprograma. */
#include <stdio.h>

int segundomaior(int vet[]){
	int maior=0;
	int segmaior=0;
	int k;
	for(k=0;k<5;k++){
		if(maior<vet[k]){
			segmaior=maior;
			maior=vet[k];
		}
	}
	return segmaior;
}


void main(){
	int vet[5];
	int k;
	for(k=0;k<5;k++){
		printf("informe um numero inteiro:");
		scanf("%d",&vet[k]);
	}
	int sMaior= segundomaior(vet);
	printf(" o segundo maior numero eh %d",sMaior);
	 getch();
}

