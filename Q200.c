/*200. Escreva um programa que leia o valor do lado de um quadrado e calcule a sua �rea e
o seu per�metro. O programa deve ter um subprograma para calcular a �rea e outro
para calcular o per�metro.*/
#include <stdio.h>

int area(int n){
	int LadoxLado=n*n;
	return LadoxLado;
}
int perimetro(int n){
	int Ladox4=n*4;
	return Ladox4;
}
void main(){
	int lado;
	printf("informe o valor do lado de um quadrado:");
	scanf("%d",&lado);
	int valorArea=area(lado);
	int valorPerimetro=perimetro(lado);
	printf("o valor da area eh %d e do perimetro %d",valorArea,valorPerimetro);
	getch();
}
