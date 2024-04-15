/*131. Escreva um programa que leia 10 números reais distintos e calcule o segundo maior
número lido.*/
#include <stdio.h>
void main(){
	int n;
	printf("informe um numero real : ");
	scanf("%d",&n);
	int maior=n;
	int segundomaior=n;
	int k;
	for(k=2;k<=10;k++){
		printf("informe um numero real distinto do anterior: ");
		scanf("%d",&n);
		if(n>maior){
			segundomaior=maior;
			maior=n;
		}
		else if(n<maior && n>segundomaior){
			segundomaior=n;
		}
	}
	printf("o segundo maior numero lido foi: %d",segundomaior);
	getch();
}
