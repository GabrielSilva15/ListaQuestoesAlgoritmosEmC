/*199. Escreva um programa que leia tr�s n�meros inteiros e calcule a sua m�dia aritm�tica.
O c�lculo da m�dia deve ser realizado atrav�s de um subprograma.*/
#include <stdio.h>

int media(int n1,int n2,int n3){
	int soma=n1+n2+n3;
	return soma/3;
}

void main(){
	int num1;
	printf("informe um numero inteiro: ");
	scanf("%d",&num1);
	int num2;
	printf("informe um numero inteiro: ");
	scanf("%d",&num2);
	int num3;
	printf("informe um numero inteiro: ");
	scanf("%d",&num3);
	int MediaArit=media(num1,num2,num3);
	printf("a media aritmetica eh %d",MediaArit);
	getch();
}
