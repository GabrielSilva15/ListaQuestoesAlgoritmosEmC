/*207. Escreva um programa que leia um valor em polegadas e o converta para centímetros,
considerando que uma polegada equivale a 2.54 cm. A conversão deve ser realizada
através de um subprograma.*/

#include <stdio.h>

float cm(float polegada){
	float centimetro=polegada*2.54;
	return centimetro;
}

void main(){
	float polegadas;
	printf("informe as polegadas:");
	scanf("%f",&polegadas);
	
	float conversao=cm(polegadas);
	printf("%.2f polegadas em centimetros eh %.2f",polegadas,conversao);
	getch();
}
