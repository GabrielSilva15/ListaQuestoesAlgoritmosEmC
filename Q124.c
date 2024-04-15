/*124. Escreva um programa que imprima os seis primeiros pares de números primos
gêmeos. Dois números são chamados de primos gêmeos se eles forem primos e a
diferença entre os dois for igual a 2. (Por exemplo, 11 e 13 são primos gêmeos).*/
#include <stdio.h>
void main(){
	int cont=1;
	int primo=3;
	int primo2=5;
	int k;
	int numdiv=0;
	int numdiv2=0;
	while(cont<=6){

		for(k=1;k<=primo;k++){
			if(primo%k==0){
				numdiv++;
			}
		}
		for(k=1;k<=primo2;k++){
			if(primo2%k==0){
				numdiv2++;
			}
		}
		if(numdiv2==2 && numdiv==2){
			printf("%d e %d\n",primo,primo2);
			cont++;
		}
		numdiv=0;
		numdiv2=0;
		primo++;
		primo2++;
	}
	getch();
}
