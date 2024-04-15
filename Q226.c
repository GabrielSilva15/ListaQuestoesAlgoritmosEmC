/* 226. Escreva um programa que leia um número inteiro e verifique se ele é positivo,
negativo ou neutro. Esta verificação deve ser realizada através de um subprograma.*/
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

