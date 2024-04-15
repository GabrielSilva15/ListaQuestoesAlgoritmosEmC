/*189. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e
a seguir leia um número inteiro N entre 1 e 5 e verifique se a coluna N da matriz é
nula.*/
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
	int n;
	printf("informe um numero entre 1 e 5: ");
	scanf("%d",&n);
	int verificar=0;
	
	for(k=0;k<tam;k++){
		if(mat[k][n-1]!=0){
			verificar=1;
		}
	}
	
	if(verificar==0){
		printf("a coluna %d da matriz eh nula",n);
	}
	else{
		printf("a coluna %d da matriz nao eh nula",n);
	}
	getch();
}
