/* 259. Escreva um subprograma recursivo que receba como entrada um valor em decimal e
imprima o seu valor correspondente em hexadecimal.*/
#include <stdio.h>

	void hex(int num){
		if(num==0){
			printf("0");
		}
		if(num<16){
			printf("%d",num%16);
		}
		else{
			hex(num/16);
			printf("%d",num%16);
		}
	}
void main(){
	int num;
	printf("informe um numero decimal");
	scanf("%d",&num);
	hex(num);

	 getch();
}

