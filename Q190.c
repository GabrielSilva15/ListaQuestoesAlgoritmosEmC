/*190. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e
verifique quantas linhas nulas existem na matriz.*/
#include <stdio.h>
const int tam=5;
void main(){
	float mat[tam][tam];
	int k;
	int j;
	for(k=0;k<tam;k++){
		for(j=0;j<tam;j++){
			printf("informe um numero real: ");
			scanf("%f",&mat[k][j]);
		}
	}
	
	printf("a matriz informada eh:\n");
	for(k=0;k<tam;k++){
		for(j=0;j<tam;j++){
			printf("%f ",mat[k][j]);
		}
		printf("\n");
	}
	
	int cont=0;
	int verificar=0;
	
	for(k=0;k<tam;k++){
		verificar=0;
		for(j=0;j<tam;j++){
			if(mat[k][j]!=0){
				verificar=1;
			}
		}
		if(verificar==0){
			cont++;
		}
	}
	printf("existem %d linhas nulas na matriz",cont);
	getch();
}
