/*224. Escreva um programa que leia um n�mero inteiro e determine o seu valor absoluto.
O valor absoluto deve ser calculado atrav�s de um subprograma (sem usar qualquer
subprograma fornecido pela linguagem de programa��o).*/
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

