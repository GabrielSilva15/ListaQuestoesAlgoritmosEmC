/* 260. Escreva um subprograma recursivo que receba como entrada um número inteiro e
calcule a sua quantidade de algarismos.*/
#include <stdio.h>
	int alg(int num){
		if(num<10){
			return 1;
		}
		return 1 + alg(num/10);
	}

void main(){
	int num;
	printf("informe um numero inteiro:");
	scanf("%d",&num);
	int algarismo=alg(num);
	printf("o numero %d tem %d algarismos",num,algarismo);

	 getch();
}

