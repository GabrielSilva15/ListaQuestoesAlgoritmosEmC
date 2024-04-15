/*118. Escreva um programa que leia um número N e imprima os N primeiros números
primos positivos.*/
#include <stdio.h>
void main(){
	int n;
	printf("informe um numero inteiro: ");
	scanf("%d",&n);
	int cont=1;
	int primo=2;
	int numdiv=0;
	while(cont<=n){
		int k;
		for(k=1;k<=primo;k++){
			if(primo%k==0){
				numdiv++;
			}
		}
		if(numdiv==2){
			printf("%d ",primo);
			cont++;
		}
		primo++;
		numdiv=0;
	}
}
