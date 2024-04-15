/*181. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e
a seguir leia um número inteiro N entre 1 e 5 e imprima os N primeiros elementos da
sua diagonal principal.*/
#include <stdio.h>
const int tam=5;
void main(){
	int mat[tam][tam];
	int k;
	int j;
	for(k=0;k<tam;k++){
		for(j=0;j<tam;j++){
			printf("informe um valor: ");
			scanf("%d",&mat[k][j]);
		}
	}
	
	printf("a matriz quadrada eh:\n ");
	for(k=0;k<tam;k++){
		for(j=0;j<tam;j++){
			printf("%d ",mat[k][j]);
		}
		printf("\n");
	}
	
	int n;
	printf("informe um numero inteiro entre 1 e 5: ");
	scanf("%d",&n);
	
	for(k=0;k<n;k++){
		for(j=0;j<n;j++){
			if(k==j){
				printf("%d",mat[k][j]);
			}
		}
		printf("\n");
	}
	getch();
}
