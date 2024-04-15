/* 252. Escreva um subprograma recursivo que receba como parâmetros de entrada dois
números inteiros M e N e calcule a soma de todos os números do intervalo [M, N].*/
#include <stdio.h>

int calculo(int m, int n){
	if(m==n){
		return n;
	}
	return m + calculo(m+1,n);
}


void main(){
	int m,n;
	printf("informe dois numeros m e n");
	scanf("%d%d",&m,&n);
	int soma=calculo(m,n);
	printf(" a soma do intervalo %d e %d eh %d",m,n,soma);
	 getch();
}

