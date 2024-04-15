/*185. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e
calcule o valor da soma dos elementos de cada uma de suas linhas.*/
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
	
	int soma=0;

	for(k=0;k<tam;k++){
		soma=0;
		for(j=0;j<tam;j++){
			soma=soma+mat[k][j];
		}
		printf("a soma de todos os elementos da linha %d dessa matriz eh: %d\n ",k,soma);
	}
	getch();
}
