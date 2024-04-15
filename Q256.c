/*256. Escreva um subprograma recursivo que receba como entrada uma matriz quadrada
de ordem 5 de números reais e um número inteiro N (entre 1 e 5) e imprima os N
primeiros números da diagonal principal. */
#include <stdio.h>	
	const int tam=5;
	
	void matriz(float mat[tam][tam],int n){
		if(n!=tam && n>=0){
		printf("%f ",mat[tam-n-1][tam-n-1]);
		}
		matriz(mat,n-1);
	}
	

void main(){
		float mat[tam][tam];
		int k;
		int j;
		int n;
		printf("ifnorme um numero inteiro entre 1 e 5:");
		scanf("%d",&n);
		for(k=0;k<tam;k++){
			for(j=0;j<tam;j++){
				printf("informe um numero:");
				scanf("%f",&mat[k][j]);
			}
		}
		for(k=0;k<tam;k++){
			for(j=0;j<tam;j++){
				printf("%.1f ",mat[k][j]);
			}
			printf("\n");
		}	
	
	matriz(mat,n);

	 getch();
}

