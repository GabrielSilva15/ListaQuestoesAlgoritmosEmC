/*276. Escreva um subprograma recursivo que receba como entrada um n�mero inteiro N
n�o negativo e imprima a sa�da mostrada abaixo. O exemplo abaixo considera que N �
igual a 5.
*****
****
***
**
**/

#include <stdio.h>


void asterisco(int n){
	if(n==0){
		printf("");

	}
	
	int k;
	for(k=0;k<n;k++){
		printf("*");
		if(k==n-1){
			printf("\n");
		}
	}
	asterisco(n-1);


	
}

void main(){
	int n;
	printf("informe um numero inteiro:");
	scanf("%d",&n);
	asterisco(n);

	 getch();
}

