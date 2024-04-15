/*193. Escreva um programa que leia uma matriz quadrada de ordem dez de números
inteiros e verifique a quantidade de linhas e colunas nulas da matriz. O resultado
deve ser um único número referente à soma do número de linhas e colunas nulas.*/
#include <stdio.h>
const int tam=4;
void main(){
	int mat[tam][tam];
	int k;
	int j;
	for(k=0;k<tam;k++){
		for(j=0;j<tam;j++){
			printf("informe um numero inteiro: ");
			scanf("%d",&mat[k][j]);
		}
	}
	int coluna=0;
	int linha=0;
	int cont=0;
	
	for(k=0;k<tam;k++){
		cont=0;
		for(j=0;j<tam;j++){
			if(mat[k][j]==0){
				cont++;
			}
		}
		if(cont==tam){
			linha++;
		}
	}
	
	printf("A matriz informada eh:\n ");
	for(k=0;k<tam;k++){
		for(j=0;j<tam;j++){
			printf("%d ",mat[k][j]);
		}
		printf("\n");
	}
	printf("%d linhas nula e",linha);
	
	
	for(k=0;k<tam;k++){
		cont=0;
		for(j=0;j<tam;j++){
			if(mat[j][k]==0){
				cont++;
			}
		}
		if(cont==tam){
			coluna++;
		}
	}
	printf("%d colunas nula",coluna);

	getch();
	
}
