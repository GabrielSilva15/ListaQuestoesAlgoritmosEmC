/*116. Escreva um programa que leia o nome, o sexo e a idade de um grupo de 20 pessoas e
calcule o percentual de mulheres que tem entre 18 e 21 anos.*/
#include <stdio.h>
void main(){
	int cont=0;
	int k;
	char nome[20];
	char sexo;
	int idade;
	for(k=1;k<=3;k++){
		printf("informe o nome de uma pessoa: ");
		scanf("%s",nome);
		fflush(stdin);
		printf("informe o sexo dessa pessoa: ");
		scanf("%c",&sexo);
		fflush(stdin);
		printf("informe a idade dessa pessoa");
		scanf("%d",&idade);
		if(sexo=='F' && idade>=18 && idade<=21){
			cont++;
		}
	}
	float percentual=(cont*100)/3;
	printf("%.1f%% mulheres que tem entre 18 e 21 anos",percentual);
	getch();
}
