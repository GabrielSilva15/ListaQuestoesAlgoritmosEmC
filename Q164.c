/*164. Escreva um programa que leia dois vetores A e B de 5 números inteiros cada e calcule
um terceiro vetor que contenha todos os elementos que estão presentes em pelo
menos um dos vetores lidos. O terceiro vetor não deve armazenar valores repetidos.*/
#include <stdio.h>
const int tam = 5;
void main(){
	int vetA[tam];
	int vetB[tam];
	int aux=0;
	int vetC[aux];
	int k;
	int j;
	int igual=0;

	
	for(k=0;k<tam;k++){
		printf("informe um numero inteiro: ");
		scanf("%d",&vetA[k]);
	}
	for(k=0;k<tam;k++){
		printf("informe um numero inteiro: ");
		scanf("%d",&vetB[k]);
	}
	
	for(k=0;k<tam;k++){
		igual=0;
		for(j=0;j<=k;j++){
			if(j==0 && k==0){
				igual=0;
			}
			else if(vetA[k]==vetC[j]){
				igual=1;
			}
		}
		if(igual==0){
			vetC[aux]=vetA[k];
			aux++;
		}
	}
	
	
	
		for(k=0;k<aux;k++){	
			printf("%d ",vetC[k]);
		}	
		getch();
}
