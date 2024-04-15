/*182. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e
determine o maior valor presente na diagonal principal.*/
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

	int maior=0;
	for(k=0;k<tam;k++){
		for(j=0;j<tam;j++){
			if(k==j && maior<mat[k][j]){
				maior=mat[k][j];
			}
		}
	}
	printf("o maior valor presente na diagonal principal dessa matriz eh %d",maior);
	getch();
}
