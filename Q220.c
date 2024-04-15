/*220. Escreva um programa que leia o peso e a altura de uma pessoa e determine o seu
índice de massa corporal, que deve ser calculado através de um subprograma.*/
#include <stdio.h>

float massacorporal(float peso,float altura){
	float imc= peso / (altura*altura);
	return imc;
}

void main(){
	float peso;
	printf("informe o valor do peso de uma pessoa:");
	scanf("%f",&peso);
	float altura;
	printf("informe o valor da altura de uma pessoa:");
	scanf("%f",&altura);
	float indicemc=massacorporal(peso,altura);
	printf("o indice de massas corporal dessa pessoa eh %.2f",indicemc);
	getch();	
}
