/*251. Escreva um subprograma recursivo que receba como entrada um número inteiro não
negativo e calcule o seu fatorial. */
#include <stdio.h>
	int fat(int n){
		if(n==1){
			return 1;
		}
		if(n==0){
			return 0;
		}
		return n * fat(n-1);
	}

void main(){
	int n;
	printf("informe um nuemro inteiro nao negativo: ");
	scanf("%d",&n);
	int fatorial=fat(n);
	printf("o fatorial desse numero eh %d",fatorial);
	 getch();
}

