/*203. Escreva um programa que leia o valor da base e da altura de um tri�ngulo e calcule a
sua �rea, que deve ser calculada atrav�s de um subprograma.*/
#include <stdio.h>

float area(float base, float altura){
	float multi=base*altura;
	return multi/2;
}

void main(){
	float base;
	printf("informe o valor da base do triangulo: ");
	scanf("%f",&base);
	float altura;
	printf("informe o valor da altura do triangulo: ");
	scanf("%f",&altura);
	float areaTriangulo= area(base,altura);
	printf("o valor da area do triangulo eh %.2f",areaTriangulo);
	getch();
	
}
