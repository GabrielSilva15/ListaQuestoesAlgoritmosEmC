/*210. Em uma determinada cidade, cada m2 de um terreno está avaliado em R$ 50,00.
Escreva um programa que leia o comprimento e a largura de um terreno localizado
nesta cidade e calcule o seu valor de mercado. O cálculo deve ser realizado através
de um subprograma, que deve receber como entrada o comprimento e a largura do
terreno.*/

#include <stdio.h>

float valor(float comprimento,float largura){
	float terreno=comprimento*largura;
	return terreno*50;
}

void main(){
	float comp;
	printf("informe o valor do comprimento do terreno: ");
	scanf("%f",&comp);
	float larg;
	printf("informe o valor da largura do terreno: ");
	scanf("%f",&larg);
	float valorterreno=valor(comp,larg);
	printf("o valor desse terreno no mercado eh %.2f",valorterreno);
	getch();
}
