/*125. Escreva um programa que leia um número inteiro positivo N e imprima os N primeiros
números perfeitos.*/
#include <stdio.h>
void main(){
	int n;
	printf("informe um numero inteiro positivo:");
	scanf("%d",&n);
	int cont=1;
	int soma=0;
	int num=2;
	int k;
	while(cont<=n){
		soma=0;
		for(k=1;k<num;k++){
			if(num%k==0){
				soma=soma + k;
			}
		}
		if(soma==num){
			printf("%d ",num);
			cont++;
		}
		num++;
	}
}
