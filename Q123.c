/*123. Escreva um programa que leia dois números inteiros M e N e calcule os N primeiros
números primos maiores ou iguais a M.*/
#include <stdio.h>
void main(){
	int n,n2;
	printf("informe dois numeros inteiro: ");
	scanf("%d%d",&n,&n2);
	int numdiv=0;
	int primo=2;
	int k;
	int l;
	int cont=1;
	while(cont<=n2){
			numdiv=0;
			for(l=1;l<=primo;l++){
				if(primo%l==0){
					numdiv++;
				}
			}
			if(numdiv==2 && primo>=n){
				printf("%d ",primo);
				cont++;
			}
			primo++;
	}	
}
		
