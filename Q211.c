/*211. Escreva um programa que leia o valor do raio de uma esfera e determine o seu
volume. O cálculo deve ser realizado através de um subprograma*/
#include  <stdio.h>
#include <math.h>
const float pi=3.14;
float volume(float raio){
	float valor=(pow(raio,3) * pi * 4)/3;
	return valor;
}

void main(){
	float raio;
	printf("informe o valor do raio de uma esfera: ");
	scanf("%f",&raio);
	float volEsfera=volume(raio);
	printf("o volume dessa esfera eh %.2f",volEsfera);
	getch();
}
