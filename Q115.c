/*115. Escreva um programa que leia o peso e a altura de um grupo de 20 pessoas e calcule o
percentual de pessoas abaixo do peso, o percentual de pessoas acima do peso e o
percentual de pessoas que estão dentro da faixa de peso adequada.*/
#include <stdio.h>
void main(){
	float peso;
	float altura;
	int Acima=0;
	int Faixa=0;
	int Abaixo=0;
	int cont=1;
	int k;
	while(cont<=20){
		printf("informe o peso de uma pessoa: ");
		scanf("%f",&peso);
		printf("informe a altura de uma pessoa: ");
		scanf("%f",&altura);
		float imc=peso/(altura*altura);
		if(imc<18){
			Abaixo++;
		}
		else if(imc>=18 && imc<=25){
			Faixa++;
		}
		else if(imc>25){
			Acima++;
		}
		cont++;
	}
	float percentualAcima= (Acima*100)/20;
	float percentualAbaixo= (Abaixo*100)/20;
	float percentualFaixa= (Faixa*100)/20;
	printf("O percentual de pessoas acima do peso eh %.1f%%, o de pessoas abaixo do peso eh %.1f%% e o de pessoas na faixa do peso eh %.1f%%",percentualAcima,percentualAbaixo,percentualFaixa);
	getch();
}
