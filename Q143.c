/*143. Escreva um programa que leia dez números inteiros e calcule a diferença entre os
dois maiores números digitados pelo usuário.*/
#include<stdio.h>
void main(){
	int n;
	printf("informe um numero inteiro: ");
	scanf("%d",&n);
	int maior=n;
	int segmaior=n;
	int cont=1;
	while(cont<=10){
		if(n>maior){
			segmaior=maior;
			maior=n;
		}
		else if(n<maior && n>segmaior){
			segmaior=maior;
		}
		printf("informe outro numero inteiro:");
		scanf("%d",&n);
		cont++;
	}
	int diferenca=maior-segmaior;
	printf(" a diferença entre o numero %d e o numero %d eh %d",maior,segmaior,diferenca);
	getch();
}
