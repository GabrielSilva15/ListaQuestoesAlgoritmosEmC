/*177. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e
calcule a sua matriz transposta.*/

#include <stdio.h>
const int tam=5;
void main(){
	int mat[tam][tam];
	int k;
	int j;
	for(k=0;k<tam;k++){
		for(j=0;j<tam;j++){
			printf("informe um numero: ");
			scanf("%d",&mat[k][j]);
		}
	}
	
	printf("a matriz antes de virar transposta:\n");
	for(k=0;k<tam;k++){
		for(j=0;j<tam;j++){
			printf("%d ",mat[k][j]);
		}
		printf("\n");
	}
	printf("a matriz transposta:\n");
	for(k=0;k<tam;k++){
		for(j=0;j<tam;j++){
			printf("%d ",mat[j][k]);
		}
		printf("\n");
	}	
	getch();
	
}
