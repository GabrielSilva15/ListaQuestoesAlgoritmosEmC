/*218. Escreva um programa que leia um valor em segundos e converta para a forma X
horas Y minutos e Z segundos. Por exemplo, o valor 3670 equivale a 1 hora 1 minutos

e 10 segundos. O programa deve ter: um subprograma para calcular o valor das
horas, um subprograma para calcular o valor dos , um subprograma para calcular o
valor dos segundos e um subprograma para imprimir o resultado final.*/
#include <stdio.h>

int horas(int segundos){
	int conversao=segundos/3600;
	return conversao;
}

int minutos(int segundos){
	int resto=segundos%3600;
	int conversao=resto/60;
	return conversao;
}

int segundos(int segundos){
	int resto=segundos%3600;
	int minutos=resto/60;
	int conversao=resto%60;
	return conversao;
}

void main(){
	int sec;
	printf("informe um valor em segundos:");
	scanf("%d",&sec);
	int hr=horas(sec);
	int min=minutos(sec);
	int second=segundos(sec);
	printf("%d segundos convertido equivale ah %d hora(s) %d minuto(s) e %d segundo(s)",sec,hr,min,second);
	getch();
}
