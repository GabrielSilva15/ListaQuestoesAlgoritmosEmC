/*209. Escreva um programa que leia os valores de dois ângulos internos de um triângulo e
calcule o valor do terceiro ângulo. O cálculo deve ser realizado através de um
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
