/*146. Escreva um programa que leia dois números inteiros M e N e calcule os valores de M
div N e M mod N. Os valores devem ser calculados sem o uso dos operadores div e
mod.*/
#include <stdio.h>
void main(){
	int M,N;
	printf("informe dois numeros inteiros: ");
	scanf("%d%d",&M,&N);
	int resto=M;
	int div=0;
	while(resto>=N){
		resto=resto-N;
		div++;
	}
	printf("o div de M por N eh %d e o mod de M por N eh %d",div,resto);
	getch();
}
