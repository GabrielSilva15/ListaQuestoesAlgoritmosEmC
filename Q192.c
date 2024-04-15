/*192. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e
um número real N e gere uma terceira matriz correspondente à multiplicação da
matriz lida por N.*/
#include <stdio.h>
const int tam=3;
void main(){
	float mat[tam][tam];
	int k;
	int j;
	for(k=0;k<tam;k++){
		for(j=0;j<tam;j++){
			printf("informe um numero: ");
			scanf("%f",&mat[k][j]);
		}
	}
	float n;
	printf("informe um numero real: ");
	scanf("%f",&n);
	
	float multi[tam][tam];
	for(k=0;k<tam;k++){
		for(j=0;j<tam;j++){
			multi[k][j]= mat[k][j]*n;
		}
	}
	
	printf("A matriz informada foi:\n ");
	for(k=0;k<tam;k++){
		for(j=0;j<tam;j++){
			printf("%f ",mat[k][j]);
		}
		printf("\n");
	}
	
	printf("A matriz informada apos a multiplicacao por %.1f eh:\n ",n);
	for(k=0;k<tam;k++){
		for(j=0;j<tam;j++){
			printf("%.1f ",multi[k][j]);
		}
		printf("\n");
	}
	getch();
	
}
