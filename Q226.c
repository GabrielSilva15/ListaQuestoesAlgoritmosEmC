/* 226. Escreva um programa que leia um n�mero inteiro e verifique se ele � positivo,
negativo ou neutro. Esta verifica��o deve ser realizada atrav�s de um subprograma.*/
#include <stdio.h>
	void veri(int n){
		if(n>0){
			printf("o numero %d eh positivo",n);
		}
		else if(n==0){
			printf("o numero %d eh neutro",n);
		}
		else{
			printf("o numero %d eh negativo",n);
		}
	}

void main(){
	int n;
	printf("informe um numero inteiro:");
	scanf("%d",&n);
	veri(n);

	 getch();
}

