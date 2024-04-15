/*255. Escreva um subprograma recursivo que receba como entrada o termo inicial e a
razão de uma progressão aritmética e um número inteiro positivo N e calcule o
enésimo termo da progressão. */
#include <stdio.h>
	int progressao(int inicial,int razao,int n){
		if(n==1){
			return inicial;
		}
		
		return razao + progressao(inicial,razao,n-1);
	}

void main(){
	int inicial;
	printf("informe o termo inicial: ");
	scanf("%d",&inicial);
	int razao;
	printf("informe a razao de um PA:");
	scanf("%d",&razao);
	int n;
	printf("informe um numero inteiro positivo:");
	scanf("%d",&n);
	int enesimo=progressao(inicial,razao,n);
	printf("o enesimo termo da progressao eh %d",enesimo);

	 getch();
}

