/*209. Escreva um programa que leia os valores de dois �ngulos internos de um tri�ngulo e
calcule o valor do terceiro �ngulo. O c�lculo deve ser realizado atrav�s de um
subprograma.*/
#include <stdio.h>

int terceiroAng(int ang1,int ang2){
	int soma=180-(ang1+ang2);
	return soma;
}

void main(){
	int angulo1;
	printf("informe um angulo interno do triangulo:");
	scanf("%d",&angulo1);
	int angulo2;
	printf("informe um segundo angulo interno do triangulo:");
	scanf("%d",&angulo2);
	int tercAngulo=terceiroAng(angulo1,angulo2);
	printf("o terceiro angulo interno do triangulo eh %d",tercAngulo);
	getch();
}
