/*145. Escreva um programa que leia um n�mero inteiro N e, a seguir leia v�rios n�meros
inteiros. O processo de leitura deve ser encerrado quando a soma dos n�meros
digitados pelo usu�rio (excluindo-se o valor de N) for superior ao valor de N.*/
#include <stdio.h>
void main(){
	int n;
	printf("informe um numero inteiro: ");
	scanf("%d",&n);
	int soma=0;
	int numeros;
	while(soma<=n){
		printf("informe um numero inteiro: ");
		scanf("%d",&numeros);
		soma=soma+numeros;
	}
	printf("a soma dos numero informados foi %d e ultrapassaram o valor do numero %d",soma,n);
	getch();
}
