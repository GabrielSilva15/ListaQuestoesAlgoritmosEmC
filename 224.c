/*224. Escreva um programa que leia um número inteiro e determine o seu valor absoluto.
O valor absoluto deve ser calculado através de um subprograma (sem usar qualquer
subprograma fornecido pela linguagem de programação).*/
#include <stdio.h>
int abs(int n){
	if(n<0){
		return -1 * n;
	}
	return n;
}

void main(){
	int n;
	printf("informe um numero inteiro:");
	scanf("%d",&n);
	int absoluto=abs(n);
	printf("o valor absoluto desse numero eh %d",absoluto);
	 getch();
}

