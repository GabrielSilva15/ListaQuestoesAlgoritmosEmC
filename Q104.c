/*104. Escreva um programa que leia um n�mero inteiro N e verifique se ele � um n�mero
perfeito. Um n�mero � perfeito quando ele � igual � soma de todos os seus divisores
exatos exceto ele mesmo. Por exemplo, o n�mero 6 (1+2+3) � um n�mero perfeito.*/
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
