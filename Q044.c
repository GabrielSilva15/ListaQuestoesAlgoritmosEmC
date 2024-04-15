/*44. Escreva um programa que leia individualmente os valores dos quatro dígitos de um
valor em binário e calcule o seu valor correspondente em decimal.*/
#include <stdio.h>
#include <math.h>
void main(){
	int n1;
	printf("informe os valores dos quatro digitos de um valor em binario: ");
	scanf("%d",&n1);
	int decimal=0;
	int resto=n1%10;
	decimal=decimal + resto*pow(2,0);
	n1=n1/10;
	resto=n1%10;
	decimal=decimal + resto*pow(2,1);
	n1=n1/10;
	resto=n1%10;
	decimal=decimal + resto*pow(2,2);
	n1=n1/10;
	resto=n1%10;
	decimal=decimal + resto*pow(2,3);
	printf("o valor do numero binario em decimal eh %d",decimal);
	getch();
}
