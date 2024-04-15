/*178. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e
imprima todos os elementos da sua diagonal principal.*/
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
	
	printf("a matriz quadrada de ordem 5 eh:\n");
	for(k=0;k<tam;k++){
		for(j=0;j<tam;j++){
			printf("%d ",mat[k][j]);
		}
		printf("\n");
	}
	
	printf("a diagonal da matriz quadrada de ordem 5 eh:\n");
	for(k=0;k<tam;k++){
		for(j=0;j<tam;j++){
			if(k==j){
			printf("%d ",mat[k][j]);
			}
		}
		printf("\n");
	}
	getch();
}
