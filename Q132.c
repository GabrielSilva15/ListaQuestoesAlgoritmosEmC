/*132. Escreva um programa que leia um n�mero inteiro N e imprima a figura abaixo, onde N
� o n�mero de elementos impressos na primeira linha. No exemplo abaixo, foi
considerado que N=5.
*****
 ****
  ***
   **
    *
*/

#include <stdio.h>
void main(){
	int num;
	printf("informe um numero inteiro: ");
	scanf("%d",&num);
	int k;
	int l;
	int j;
	for(k=num;k>=1;k--){
		for(l=num-k;l>0;l--){
			printf(" ");
		}
		for(j=k;j>=1;j--){
			printf("*");
		}
		printf("\n");
	}
	getch();
}

