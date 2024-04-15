/*202. Escreva um programa que leia o valor do raio de uma circunferência e calcule a sua
área e o seu comprimento. O programa deve fornecer um subprograma para calcular
a área e outro para calcular o comprimento.*/
#include <stdio.h>
const float pi = 3.14;
float area(int n){
	float areaCirc= pi*n*n;
	return areaCirc;
}

float comprimento(int n){
	float comprimentoCirc= 2*pi*n;
	return comprimentoCirc;
}

void main(){
	float raio;
	printf("informe o valor do raio de uma circunferencia: ");
	scanf("%f",&raio);
	
	float areaCircunferencia=area(raio);
	float comprimentoCircunferencia=comprimento(raio);
	printf("o valor da area da circunferencia eh %.2f e o comprimento eh %.2f",areaCircunferencia,comprimentoCircunferencia);
	getch();
}
