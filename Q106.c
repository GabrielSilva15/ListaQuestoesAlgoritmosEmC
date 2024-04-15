/*106. Escreva um programa que leia dois números inteiros M e N e calcule a média
aritmética dos números do intervalo [M, N].*/
#include <stdio.h>
void main(){
	int n1,n2;
	printf("informe dois numero inteiros:");
	scanf("%d%d",&n1,&n2);
	int soma=0;
	int k;
	for(k=n1;k<=n2;k++){
		soma=soma+k;
	}
	int media=soma/(n2-n1+1);
	printf("a media aritmetica do intervalo eh %d",media);
	getch();
}
