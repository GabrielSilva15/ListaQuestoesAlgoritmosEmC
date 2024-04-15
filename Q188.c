/*188. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e
a seguir leia um número inteiro N e determine a quantidade de números primos na
coluna N.*/
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
	int numdiv=0;
	int primo=0;
	for(k=0;k<tam;k++){
		numdiv=0;
		for(j=1;j<=mat[k][n-1];j++){
			if(mat[k][n-1]%j==0){
				numdiv++;
			}
		}
		if(numdiv==2){
			primo++;
		}
	}
	printf(" a coluna %d tem %d primos",n,primo);
	getch();
}
