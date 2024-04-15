/*261. Escreva um subprograma recursivo que receba como entrada um número inteiro e
calcule a soma de todos os seus algarismos. */
#include <stdio.h>

	int som(int num){
		if(num<10){
			return num%10;
		}
		return num%10 + som(num/10);
	}

void main(){
		int num;
		printf("informe um numero inteiro:");
		scanf("%d",&num);
		int soma=som(num);
		printf("a soma dos algarismos desse numero %d eh %d",num,soma);

	 getch();
}

