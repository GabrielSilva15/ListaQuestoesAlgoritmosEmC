/*217. Escreva um programa que leia um número positivo entre 1 e 9999 e calcule o valor
da unidade de milhar, da centena, da dezena e da unidade. O programa deve ter
subprogramas para calcular cada informação solicitada.*/
#include <stdio.h>

int milhar(int num){
	int valormilhar=num/1000;
	return valormilhar;
}

int centena(int num){
	int resto=num%1000;
	int valorcentena=resto/100;
	return valorcentena;
}

int dezena(int num){
	int resto=num%1000;
	int centena=resto/100;
	resto=resto%100;
	int valordezena=resto/10;
	return valordezena;
}

int unidade(int num){
	int resto=num%1000;
	int centena=resto/100;
	resto=resto%100;
	int dezena=resto/10;
	int valorunidade=resto%10;
	return valorunidade;
}

void main(){
	int num;
	printf("informe um numero positivo entre 1 e 9999: ");
	scanf("%d",&num);
	
	if(num>=1000){
		int mil=milhar(num);
		int cent=centena(num);
		int dez=dezena(num);
		int unit=unidade(num);
		printf(" %d %d %d %d",mil,cent,dez,unit);
	}
	else if(num>=100){
		int cent=centena(num);
		int dez=dezena(num);
		int unit=unidade(num);
		printf(" %d %d %d",cent,dez,unit);
	}
	
	else if(num>=10){
		int dez=dezena(num);
		int unit=unidade(num);
		printf(" %d %d",dez,unit);
	}
	else if(num>=1){
		int unit=unidade(num);
		printf(" %d",unit);
	}
	getch();
}

