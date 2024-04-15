/*180. Escreva um programa que leia uma matriz quadrada de ordem 5 de números inteiros
e um inteiro N e verifique quantas vezes o número N aparece dentro da matriz.*/
#include <stdio.h>
const int tam=5;
void main(){
	int mat[tam][tam];
	int k;
	int j;
	for(k=0;k<tam;k++){
		for(j=0;j<tam;j++){
			printf("informe um numero: ");
			scanf("%d",&mat[k][j]);
		}
	}
	
	printf("a matriz quadrada de ordem 5 eh:\n");
	for(k=0;k<tam;k++){
		for(j=0;j<tam;j++){
			printf("%d ",mat[k][j]);
		}
		printf("\n");
	}
	int n;
	printf("informe um numero inteiro: ");
	scanf("%d",&n);
	int cont=0;
	
	for(k=0;k<tam;k++){
		for(j=0;j<tam;j++){
			if(mat[k][j]==n){
			cont++;
			}
		}
	}
	printf("o numero %d aparece %d veze(s)",n,cont);
	getch();
}
