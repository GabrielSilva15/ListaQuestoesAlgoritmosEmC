/*165. Escreva um programa que leia dois vetores A e B de 5 números inteiros e calcule um
terceiro vetor que contenha todos os elementos que estão presentes nos dois
vetores. O terceiro vetor não deverá armazenar valores repetidos.*/
#include <stdio.h>
const int tam=5;
void main(){
	int vetA[tam];
	int vetB[tam];
	int aux=0;
	int vetC[aux];
	int k;
	int j;
	printf("Vetor A:");
	for(k=0;k<tam;k++){
		printf("informe um numero inteiro: ");
		scanf("%d",&vetA[k]);
	}
	printf("Vetor B:");
	for(k=0;k<tam;k++){
		printf("informe um numero inteiro: ");
		scanf("%d",&vetB[k]);
	}
	int igual=0;
	
	
	for(k=0;k<tam;k++){
		igual=0;
		for(j=0;j<=aux;j++){
			if(k==0 && j==0){
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
	
	for(k=0;k<tam;k++){
		igual=0;
		for(j=0;j<aux;j++){
			if(vetB[k]==vetC[j]){
				igual=1;
			}
		}
		if(igual==0){
			vetC[aux]=vetB[k];
			aux++;
		}
	}
	
	
	
	for(k=0;k<aux;k++){
		printf("%d ",vetC[k]);
	}
	getch();
}
