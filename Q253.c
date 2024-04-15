/*253. Escreva um subprograma recursivo que receba como entrada um número inteiro N
positivo e provoque um salto de N linhas na tela do usuário. */
#include <stdio.h>

void pular(int n){
	if(n>0){
		printf("\n");
		pular(n-1);
	}
}
void main(){
	int n;
	printf("informe um numero inteiro positivo:");
	scanf("%d",&n);
	printf("pular linha");
	pular(n);
	printf("pulei");
	 getch();
}

