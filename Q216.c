/*216. Escreva um programa que leia o valor de uma distância em metros e calcule o seu
valor correspondente em quilômetros, hectômetros, decâmetros, centímetros,
decímetros e milímetros. O programa deve ter um subprograma para converter para
cada unidade de medida.*/

#include <stdio.h>

void conversao(float m){
	float km=m/1000;
	float hcm=m/100;
	float dm=m/10;
	float cm=m*100;
	float dcm=m*10;
	float mm=m*1000;
	printf("o valor %.2f metros em quilometros eh %.2f, em hectometros eh %.2f, em decametros eh  %.2f, em centimetros eh  %.2f,em decimetros eh  %.2f e em milimetros eh  %.2f",m,km,hcm,dm,cm,dcm,mm);
}

void main(){
	float metros;
	printf("informe um valor em metros: ");
	scanf("%f",&metros);
	conversao(metros);
	getch();
}
