/*206. Escreva um programa que leia o valor dos dois catetos de um tri�ngulo ret�ngulo e
calcule o valor da hipotenusa. O c�lculo deve ser realizado atrav�s de um
subprograma.*/
#include <stdio.h>
#include <math.h>

float hipo(float cateto1,float cateto2){
	float soma=pow(cateto1,2) + pow(cateto2,2);
	float hipotenusa=sqrt(soma);
	return hipotenusa;
}

void main(){
	float cateto1;
	printf("informe o valor de um cateto: ");
	scanf("%f",&cateto1);
	float cateto2;
	printf("informe o valor do segundo cateto: ");
	scanf("%f",&cateto2);
	
	float valorHipo=hipo(cateto1,cateto2);
	printf(" o valor da hipotenusa eh %.2f",valorHipo);
	getch();
}
