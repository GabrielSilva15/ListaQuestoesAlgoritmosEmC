/* 263. Escreva um subprograma recursivo que receba como entrada dois números inteiros x
e y e calcule o resto da divisão de x por y. Para isso, não deve ser usada a função
mod.*/
#include <stdio.h>

	int rest(int x, int y){
		if(x<y){
			return x;
		}
		return rest(x-y,y);
	}
void main(){
	int n,n2;
	printf("informe dois numeros: ");
	scanf("%d%d",&n,&n2);
	int resto=rest(n,n2);
	printf("o resto da divisao de %d por %d eh %d",n,n2,resto);

	 getch();
}

