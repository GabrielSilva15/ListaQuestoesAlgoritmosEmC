/*121. Escreva um programa que leia o termo inicial e a raz�o de uma progress�o aritm�tica e
um n�mero inteiro N e imprima todos os termos da progress�o menores ou iguais a N
(caso a raz�o seja positiva) ou todos os termos maiores ou iguais a N (caso a raz�o seja
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
