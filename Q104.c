/*104. Escreva um programa que leia um número inteiro N e verifique se ele é um número
perfeito. Um número é perfeito quando ele é igual à soma de todos os seus divisores
exatos exceto ele mesmo. Por exemplo, o número 6 (1+2+3) é um número perfeito.*/
#include <stdio.h>
void main(){
	int n;
	printf("informe um numero inteiro: ");
	scanf("%d",&n);
	int k;
	int soma=0;
	for(k=1;k<n;k++){
		if(n%k==0){
			soma=soma+k;
		}
	}
	if(soma==n){
		printf("o numero %d eh perfeito",n);
	}
	else{
		printf("o numero %d nao eh perfeito",n);
	}
	getch();
}
