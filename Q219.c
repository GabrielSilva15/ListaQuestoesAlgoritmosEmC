/*219. Escreva um programa que leia o valor total que um cliente consumiu em um
restaurante e determine o valor final da sua conta, considerando que o restaurante
cobra uma taxa de serviço de 10 % e uma taxa de couvert artístico de R$ 10,00. A
conta deve ser calculada através de um subprograma.*/
#include <stdio.h>

void valorfinal(float consumo){
	float total= consumo + (consumo*0.10) + 10;
	printf("o valor total da conta eh R$%.2f",total);
}

void main(){
	float consumo;
	printf("informe o valor gasto pelo consumo no restaurante:");
	scanf("%f",&consumo);
	valorfinal(consumo);
}

