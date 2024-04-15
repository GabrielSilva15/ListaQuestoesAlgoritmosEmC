/*223. Escreva um programa que leia um número inteiro e verifique se ele é par ou ímpar. A
verificação de ser realizada através de um subprograma.*/
#include <stdio.h>

void verificar(int n){
	
	if(n==0){
		printf("o numero %d eh numero par",n);
	}
	else if(n<0){
		int pos=n*-1;
		if(pos%2==0){
			printf("o numero %d eh par",n);
		}
		else{
			printf("o numero %d numero eh impar",n);
		}
	}
	else if(n%2==0){
		printf("esse numero eh par");
	}
	else if(n%2==1){
		printf("esse numero eh impar");
	}
}

void main(){
	int n;
	printf("informe um numero inteiro :");
	scanf("%d",&n);
	verificar(n);
	getch();
}
