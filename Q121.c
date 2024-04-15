/*121. Escreva um programa que leia o termo inicial e a razão de uma progressão aritmética e
um número inteiro N e imprima todos os termos da progressão menores ou iguais a N
(caso a razão seja positiva) ou todos os termos maiores ou iguais a N (caso a razão seja
negativa).*/
#include <stdio.h>
void main(){
	int inicial,razao;
	printf("informe o termo inicia e a razao de uma progressao aritmetica: ");
	scanf("%d%d",&inicial,&razao);
	int n;
	int termos=inicial;
	printf("informe um numero inteiro: ");
	scanf("%d",&n);
	if(razao>0){
		while(termos<=n){
			printf("%d ",termos);
			termos=termos + razao;
		}
	}
	else if(razao<0){
		while(termos>=n){
			printf("%d ",termos);
			termos=termos + razao;
		}
	}
	getch();
}
