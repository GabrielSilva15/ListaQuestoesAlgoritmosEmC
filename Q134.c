/* 134. Escreva um programa que leia um n�mero inteiro N e imprima a figura abaixo, onde N
� o n�mero de elementos impressos na primeira linha. No exemplo abaixo, foi
considerado que N=5.
	*****
	****
	***
	**
	*
*/
#include <stdio.h>
void main(){
	int n;
	printf("informe um numero inteiro: ");
	scanf("%d",&n);
	int k;
	int j;
	int l;
	for(k=n;k>=1;k--){
		for(l=k;l>=1;l--){
			printf("*");
		}
		printf("\n");
	}
}
