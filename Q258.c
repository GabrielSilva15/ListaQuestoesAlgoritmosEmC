/*258. Escreva um subprograma recursivo que receba como entrada um valor em decimal e
imprima o seu valor correspondente em binário. */
#include <stdio.h>

	void bin(int num){
		if(num==0){
			printf("0");
		}
		
		if(num<2){
			printf("%d",num%2);
		}
		else{
			bin(num/2);
			printf("%d",num%2);
		}
	}
void main(){
	int n;
	printf("informe um numero em decimal:");
	scanf("%d",&n);
	bin(n);

	 getch();
}

