/*191. Escreva um programa que leia duas matrizes quadradas de ordem 5 de números
reais e gere uma terceira matriz correspondente à soma das duas matrizes lidas.*/
#include <stdio.h>
const int tam=4;
void main(){
	int mat1[tam][tam];
	int mat2[tam][tam];	
	int k;
	int j;
	for(k=0;k<tam;k++){
		for(j=0;j<tam;j++){
			printf("informe um numero: ");
			scanf("%d",&mat1[k][j]);
		}
	}
	
	for(k=0;k<tam;k++){
		for(j=0;j<tam;j++){
			printf("informe um numero: ");
			scanf("%d",&mat2[k][j]);
		}
	}
	
	
	int somamatriz[tam][tam];
	for(k=0;k<tam;k++){
		for(j=0;j<tam;j++){
			somamatriz[k][j] = mat1[k][j] + mat2[k][j];
		}
	}
	
	printf("Matriz 1:\n");
	for(k=0;k<tam;k++){
		for(j=0;j<tam;j++){
			printf("%d ",mat1[k][j]);
		}
		printf("\n");
	}
	
	printf("\nMatriz 2:\n");
	for(k=0;k<tam;k++){
		for(j=0;j<tam;j++){
			printf("%d ",mat2[k][j]);
		}
		printf("\n");
	}
	
	printf("\nA soma das duas matrizes eh:\n ");
	for(k=0;k<tam;k++){
		for(j=0;j<tam;j++){
			printf("%d ",somamatriz[k][j]);
		}
		printf("\n");
	}
	getch();
	
}
