/* 272. Escreva um subprograma recursivo que receba como entrada um n�mero inteiro n e
um n�mero inteiro positivo k e identifique o k-�simo d�gito do n�mero n (da direita
para a esquerda). Por exemplo, se n for 1957 e k for igual a 3, o resultado do
subprograma deve ser o n�mero 9.*/
#include <stdio.h>
int numero(int n,int k){
	if(n<10 && k>1){
		return 0;
	}
	if(k==1){
		return n%10;
	}
	return numero(n/10,k-1);
}

void main(){
	int n;
	printf("informe um numero inteiro:");
	scanf("%d",&n);
	int k;
	printf("informe um numero inteiro positivo:");
	scanf("%d",&k);
	int kesimo=numero(n,k);
	printf("o kesimo numero eh %d",kesimo);
	 getch();
}

