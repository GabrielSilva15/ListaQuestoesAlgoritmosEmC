/* 225. Escreva um programa que leia dois n�meros inteiros M e N e verifique se N �
m�ltiplo de M. Esta verifica��o deve ser realizada atrav�s de um subprograma.*/
#include <stdio.h>
int verificar(int m, int n){
	if(n%m==0){
		return 1;
	}
	return 0;
}

void main(){
	int m;
	printf("informe um numero inteiro:");
	scanf("%d",&m);
	int n;
	printf("informe um numero inteiro:");
	scanf("%d",&n);
	int multi=verificar(m,n);
	if(multi==1){
		printf("o numero %d eh multiplo de %d",n,m);
	}
	else{
		printf("o numero %d nao eh multiplo de %d",n,m);
	}

	 getch();
}

