/*184. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e
a seguir leia um número inteiro N entre 1 e 5 e calcule a média aritmética dos
elementos da coluna N.*/
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
	int soma=0;

	for(k=0;k<tam;k++){
				soma=soma + mat[k][n-1];
	}
	int media= soma/tam;
		
	printf("a media aritmetica da soma de todos os elementos da coluna %d dessa matriz eh: %d ",n,media);
	getch();
}
