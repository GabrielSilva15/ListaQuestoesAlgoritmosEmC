/* 274. Escreva um subprograma recursivo que receba como entrada duas matrizes
quadradas de ordem 5 de números inteiros e um número inteiro N entre 1 e 5 e
verifique se as duas matrizes são idênticas a partir da linha N.*/
#include <stdio.h>
const int tam=3;
int identica(int mat[tam][tam], int mat2[tam][tam], int n){
	int k;
	if(tam==n){
		for(k=0;k<tam;k++){
			if(mat[n-1][k]==mat2[n-1][k]){
				return 1;
			}
		}
	}
	for(k=0;k<tam;k++){
		if(mat[n-1][k]==mat2[n-1][k]){
			return 1 + identica(mat,mat2,n+1);
		}
	}
	return 0;
}

void main(){
	int mat[tam][tam];
	int mat2[tam][tam];
	int k;
	int j;
	for(k=0;k<tam;k++){
		for(j=0;j<tam;j++){
			printf("informe um numero inteiro:");
			scanf("%d",&mat[k][j]);
		}
	}
	for(k=0;k<tam;k++){
		for(j=0;j<tam;j++){
			printf("informe um numero inteiro:");
			scanf("%d",&mat2[k][j]);
		}
	}
	
	int n;
	printf("informe um numero inteiro entre 1 e 5:");
	scanf("%d",&n);
	
	int veri=identica(mat,mat2,n);
	if(veri-1==tam-n){
		printf("as duas matrizes sao identicas a partir da posicao %d",n);
	}
	else{
		printf("0");
	}
	getch();
}

