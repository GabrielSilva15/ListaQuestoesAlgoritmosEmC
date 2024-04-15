/*205. Escreva um programa que leia o valor de uma distância percorrida em km e o tempo
gasto em horas e calcule a velocidade média em m/s. A conversão deve ser realizada
através de um subprograma.*/
#include <stdio.h>

float velocidademedia(float distancia,float tempo){
	float dis=distancia*1000;
	float tp=tempo*3600;
	return dis/tp;
}

void main(){
	float distancia;
	printf("informe a distancia em km percorrida: ");
	scanf("%f",&distancia);
	float tempo;
	printf("informe o tempo percorrido: ");
	scanf("%f",&tempo);
	float vm=velocidademedia(distancia,tempo);
	printf("a velocidade media eh %.2fms",vm);
	getch();
}

