/*276. Escreva um subprograma recursivo que receba como entrada um número inteiro N
não negativo e imprima a saída mostrada abaixo. O exemplo abaixo considera que N é
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

