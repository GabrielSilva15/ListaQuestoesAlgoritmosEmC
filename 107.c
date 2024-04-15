/*107. Escreva um programa que leia dois números inteiros M e N e calcule a média
aritmética dos números primos do intervalo [M, N].*/
#include <stdio.h>
void main(){
	int n1,n2;
	printf("informe dois numeros inteiros:");
	scanf("%d%d",&n1,&n2);
	int k;
	int l;
	int soma=0;
	int Div;
	int contPrimo=0;
	for(k=n1;k<=n2;k++){
		Div=0;
		for(l=1;l<=k;l++){
			if(k%l==0){
				Div++;
			}
		}
		if(Div==2){
			soma=soma+k;
			contPrimo++;
		}
	}
	int media=soma/contPrimo;
	printf(" a media aritmetica dos numeros primos eh %d",media);
	getch();
}
