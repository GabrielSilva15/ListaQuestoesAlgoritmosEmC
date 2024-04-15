/* 248. Escreva um programa que leia um valor real a ser sacado pelo usu�rio e identifique
quantas c�dulas de cada tipo devem ser usadas para que o saque seja efetuado. Voc�
pode supor que o caixa tem c�dulas de R$ 10,00, R$ 20,00, R$ 50,00 e R$ 100,00. O
valor m�ximo de um saque � R$ 1000,00 e, para cada saque, deve ser dada
prioridade para as c�lulas maiores. A verifica��o deve ser realizada atrav�s de um
subprograma.*/
#include <stdio.h>

void cedulas(int valor){
	if(valor>=100){
	 int cedulas100=valor/100;
	 printf("%d cedulas de 100 ",cedulas100);
	 valor=valor%100;
	}
	
	if(valor>=50){
	 int cedulas50=valor/50;
	 printf("%d cedulas de 50 ",cedulas50);
	 valor=valor%50;
	}
	
	if(valor>=20){
	 int cedulas20=valor/20;
	 printf("%d cedulas de 20 ",cedulas20);
	 valor=valor%20;
	}	
	
	if(valor>=10){
	 int cedulas10=valor/10;
	 printf("%d cedulas de 10",cedulas10);
	 valor=valor%10;
	}	
	
	
}

void main(){
	int valor;
	printf("informe o valor a ser sacado pelo usuario: ");
	scanf("%d",&valor);
	
	cedulas(valor);

	 getch();
}

