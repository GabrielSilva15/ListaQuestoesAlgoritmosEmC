/*215. O carro de Jo�o consegue percorrer em m�dia 14 km consumindo 1 litro de
combust�vel. Escreva um programa que leia o valor da dist�ncia que Jo�o vai
percorrer durante uma viagem e o pre�o atual de um litro de combust�vel e calcule
quanto ele dever� gastar com combust�vel durante a viagem. O c�lculo deve ser
realizado atrav�s de um subprograma.*/
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
