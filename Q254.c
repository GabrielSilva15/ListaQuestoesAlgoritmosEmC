/*254. Escreva um subprograma recursivo que receba como entrada dois números inteiros x
e y e calcule o valor do produto de x por y. */
#include <stdio.h>

	int produto(int x, int y){
		if(y==0){
			return 0;
		}
		return x + produto(x,y-1);
	}
void main(){
	int x,y;
	printf("informe dois numero inteiros:");
	scanf("%d%d",&x,&y);
	int calculo=produto(x,y);
	printf("o produto de %d por %d eh %d",x,y,calculo);
	 getch();
}

