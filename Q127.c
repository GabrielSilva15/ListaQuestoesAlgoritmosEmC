/*127. Escreva um programa que leia v�rias palavras e, para cada palavra lida, determine o
seu n�mero de letras. O processamento dever� ser encerrado quando forem lidas duas
palavras de cinco letras.*/
#include <stdio.h>
#include <string.h>
void main(){
	char palavra[20];
	int cont=0;
	while(cont<2){
		printf("informe uma palavra: ");
		scanf("%s",palavra);
		fflush(stdin);
		int tam=strlen(palavra);
		if(tam==5){
			cont++;
		}
		printf("a palavra %s tem %d letras\n",palavra,tam);
	}
	getch();
}
