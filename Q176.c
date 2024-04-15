/*176. Escreva um programa que leia uma matriz quadrada de ordem 4 de números inteiros
e imprima a matriz lida.*/
#include <stdio.h>
void main(){
	int mat[4][4];
	int j;
	int k;
	for(k=0;k<4;k++){
		for(j=0;j<4;j++){
			printf("informe um numero: ");
			scanf("%d",&mat[k][j]);
		}
	}
	for(k=0;k<4;k++){
		for(j=0;j<4;j++){
			printf("%d ",mat[k][j]);
		}
		printf("\n");
	}
	getch();
	
}
