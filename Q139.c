/*139. Escreva um programa que leia um número inteiro N e um número inteiro K e
identifique o k-ésimo algarismo (da direita para a esquerda) do número N. Caso o

valor de k seja maior do que a quantidade de algarismos de N, a resposta do
programa deve ser 0.*/
#include <stdio.h>
void main(){
	int n;
	printf("informe um numero inteiro n: ");
	scanf("%d",&n);
	int k;
	printf("informe outro numero inteiro k:");
	scanf("%d",&k);
	int cont=1;
	int calculo=0;
	if(k>n){
		printf("0");
	}
	else{
	
		while(cont<=k){
			calculo=n%10;
			n=n/10;
			cont++;
		}
	}
	printf("%d",calculo);
}
