/*166. Escreva um programa que leia dois vetores A e B de 5 números inteiros e calcule um
terceiro vetor que contenha todos os elementos do vetor A que não estão presentes
no vetor B. O terceiro vetor não deverá armazenar valores repetidos.*/
#include<stdio.h>
const int tam=5;
void main(){
	int vetA[tam];
	int vetB[tam];
	int igual=0;
	int aux=0;
	int vetC[aux];
	int k;
	int j;
	int l;
	int i;
	printf("Vetor A:\n");
	for(k=0;k<tam;k++){
		printf("informe um numero inteiro: ");
		scanf("%d",&vetA[k]);
	}
	
	printf("Vetor B:\n");
	for(k=0;k<tam;k++){
		printf("informe um numero inteiro: ");
		scanf("%d",&vetB[k]);
	}
	
	
	for(k=0;k<tam;k++){
		igual=0;
		for(j=0;j<tam;j++){
			if(vetA[k]==vetB[j]){
				igual=1;
			}
		}
		if(igual==0){
				for(l=0;l<=aux;l++){
					if(k==0 && l==0){
						igual=0;
					}
					else if(vetA[k]==vetC[l]){
						igual=1;
					}
				}
				if(igual==0){
					vetC[aux]=vetA[k];
					aux++;
				}
			}
		}
	
	
	for(k=0;k<aux;k++){
		printf("%d ",vetC[k]);
	}
}
