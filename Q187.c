/*187. Escreva um programa que leia uma matriz quadrada de ordem 5 de n�meros reais e
a seguir leia um n�mero inteiro N e determine a quantidade de n�meros pares
existente na linha N.*/
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
	int cont=0;
	
	for(j=0;j<tam;j++){
			if(mat[n-1][j]%2==0){
				cont++;
			}
	}
	printf("a linha %d da matriz informada tem %d numeros pares",n,cont);
	getch();
}
