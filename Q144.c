/*144. Escreva um programa que leia um número inteiro N e calcule o primeiro número
natural cujo fatorial é maior do que N.*/
#include <stdio.h>
void main(){
	int n;
	printf("informe um numero inteiro: ");
	scanf("%d",&n);
	int fatorial=1;
	int natural=2;
	int k;
	while(fatorial<=n){
		fatorial=1;
		for(k=1;k<=natural;k++){
			fatorial=fatorial*k;
		}
		if(fatorial>n){
			printf("o numero natural %d tem o fatorial maior que N",natural);
		}
		natural++;
	}
	if(n==0){
		printf("1");
	}
	getch();
}
