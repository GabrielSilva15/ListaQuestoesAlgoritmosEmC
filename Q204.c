/*204. Escreva um programa que leia o valor de cinco temperaturas em Celsius e, para cada
valor lido, calcule o seu valor correspondente em Fahrenheit e em Kelvin. Os cálculos
das conversões devem ser realizados através de subprogramas.*/
#include <stdio.h>

float kelvin(float temp){
	return temp+273.15;
}

float fahrenheit(float temp){
	float calc= (temp *1.8) + 32;
	return calc;
}

void main(){
	float celsius1;
	printf("informe uma temperatura em celsius:  ");
	scanf("%f",&celsius1);
	float kelvin1=kelvin(celsius1);
	float fahrenheit1=fahrenheit(celsius1);
	printf("o valor da temperatura %.1fc em kelvin eh %.1f e em fahrenheit %.1f\n",celsius1,kelvin1,fahrenheit1);
	
	float celsius2;
	printf("informe uma temperatura em celsius:  ");
	scanf("%f",&celsius2);
	float kelvin2=kelvin(celsius2);
	float fahrenheit2=fahrenheit(celsius2);
	printf("o valor da temperatura %.1fc em kelvin eh %.1f e em fahrenheit %.1f\n",celsius2,kelvin2,fahrenheit2);
	
	float celsius3;
	printf("informe uma temperatura em celsius:  ");
	scanf("%f",&celsius3);
	float kelvin3=kelvin(celsius3);
	float fahrenheit3=fahrenheit(celsius3);
	printf("o valor da temperatura %.1fc em kelvin eh %.1f e em fahrenheit %.1f\n",celsius3,kelvin3,fahrenheit3);
	
	float celsius4;
	printf("informe uma temperatura em celsius:  ");
	scanf("%f",&celsius4);
	float kelvin4=kelvin(celsius4);
	float fahrenheit4=fahrenheit(celsius4);
	printf("o valor da temperatura %.1fc em kelvin eh %.1f e em fahrenheit %.1f\n",celsius4,kelvin4,fahrenheit4);
	
	float celsius5;
	printf("informe uma temperatura em celsius:  ");
	scanf("%f",&celsius5);
	float kelvin5=kelvin(celsius5);
	float fahrenheit5=fahrenheit(celsius5);
	printf("o valor da temperatura %.1fc em kelvin eh %.1f e em fahrenheit %.1f\n",celsius5,kelvin5,fahrenheit5);
	getch();
}
