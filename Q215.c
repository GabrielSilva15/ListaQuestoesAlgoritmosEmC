/*215. O carro de João consegue percorrer em média 14 km consumindo 1 litro de
combustível. Escreva um programa que leia o valor da distância que João vai
percorrer durante uma viagem e o preço atual de um litro de combustível e calcule
quanto ele deverá gastar com combustível durante a viagem. O cálculo deve ser
realizado através de um subprograma.*/
#include <stdio.h>

float calculo(float km, float gasolina){
	float valor= (km/14) * gasolina;
	return valor;
}

void main(){
	float distancia;
	printf("informe a distancia percorrida durante uma viagem:");
	scanf("%f",&distancia);
	float combustivel;
	printf("informe o preco atual da gasolina:");
	scanf("%f",&combustivel);
	float valorviagem=calculo(distancia,combustivel);
	printf("o valor total gasto na viagem com combustivel foi R$%.2f",valorviagem);
	getch();
}
