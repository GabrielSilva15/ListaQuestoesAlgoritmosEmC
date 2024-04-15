/*Escreva um programa que leia um valor inteiro a ser sacado pelo usu�rio e identifique
quantas c�dulas de cada tipo devem ser usadas para que o saque seja efetuado. Voc�
pode supor que o caixa tem c�dulas de R$ 10,00, R$ 20,00, R$ 50,00 e R$ 100,00. O
valor m�ximo de um saque � R$ 1000,00 e, para cada saque, deve-se priorizar o uso
das c�dulas maiores.*/

#include <stdio.h>
void main(){
	int valor;
	printf("informe o valor a ser sacado: ");
	scanf("%d",&valor);
	if(valor>=100){
		printf("%d cedula(s) de 100 ",valor/100);
		valor=valor%100;
	}
	if(valor>=50){
		printf(" %d cedula(s) de 50 ",valor/50);
		valor=valor%50;
	}
	if(valor>=20){
		printf(" %d cedula(s) de 20 ",valor/20);
		valor=valor%20;
	}
	if(valor>=10){
		printf(" %d cedula(s) de 10 ",valor/10);
	}
	getch();
}
