/*126. Escreva um programa que leia o termo inicial e a raz�o de uma PA e, a seguir, leia um
n�mero N e verifique se o n�mero N pertence � progress�o.*/
#include <stdio.h>
void main(){
	int inicial,razao;
	printf("informe o termo inicial e a razao de uma PA:");
	scanf("%d%d",&inicial,&razao);
	int n;
	printf("informe um numero: ");
	scanf("%d",&n);
	while(inicial<n){
		inicial=inicial+razao;
	}
	if(inicial==n){
		printf("o numero %d pertence a progressao",n);
	}
	else{
		printf("o numero %d nao pertence a progressao",n);
	}
	getch();
}
