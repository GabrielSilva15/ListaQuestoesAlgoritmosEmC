/* 265. Escreva um subprograma recursivo que receba como entrada um n�mero inteiro N
positivo e calcule o en�simo termo da s�rie de Fibonacci.*/
#include <stdio.h>
int fibo(int n){
	if(n==1 || n==2){
		return 1;
	}
	return fibo(n-2) + fibo(n-1);
}

void main(){
	int n;
	printf("informe um numero inteiro:");
	scanf("%d",&n);
	int fibonacci=fibo(n);
	printf("o enesimo numero da serie de fibonacci eh %d",fibonacci);

	 getch();
}

