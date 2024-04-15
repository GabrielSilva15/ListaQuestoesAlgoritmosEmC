/* 247. Escreva um programa em que leia um número inteiro entre 1000 e 9999 e verifique
se o número lido é ou não um palíndromo. Esta verificação deve ser realizada através
de um subprograma.*/
#include <stdio.h>

int palindromo(int num){
	int milhar=num/1000;
	int resto=num%1000;
	int centena=resto/100;
	resto=resto%100;
	int dezena=resto/10;
	int unit=resto%10;
	int palind= unit*1000 + dezena*100 + centena*10 + milhar;
	if(palind==num){
		return 1;
	}
	return 0;
}

void main(){
	int n;
	printf("informe um numero inteiro:");
	scanf("%d",&n);
	int veri=palindromo(n);
	if(veri==1){
		printf("o numero %d eh um palindromo",n);
	}
	else{
		printf("o numero %d nao eh um palindromo",n);
	}
	 getch();
}

