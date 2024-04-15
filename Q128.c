/*128. Escreva um programa que leia o nome e o peso de 20 bois que participam de uma
exposição e imprima o nome do boi mais leve e o nome do boi mais pesado. Para isso,
suponha que todos os bois têm pesos distintos.*/
#include <stdio.h>
#include <string.h>
void main(){
	char nome[20];
	float peso;
	printf("informe o nome de um boi: ");
	scanf("%s",nome);
	printf("informe o peso desse boi: ");
	scanf("%f",&peso);
	float maior=peso;
	float menor=peso;
	char boipesado[20];
	char boileve[20];
	int k;
	for(k=1;k<=2;k++){
		strcpy(boileve,nome);
		printf("informe o nome de um boi: ");
		scanf("%s",nome);
		printf("informe o peso desse boi: ");
		scanf("%f",&peso);
		if(maior<peso){
			maior=peso;
			strcpy(boipesado,nome);
		}
		else if(menor>peso ){
			menor=peso;
			strcpy(boileve,nome);
		}

	}
	printf("O nome do boi mais leve eh %s e do mais pesado eh %s",boileve,boipesado);
	getch();
}
