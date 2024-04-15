/*161. Escreva um programa que leia um vetor de vinte caracteres e verifique se o vetor é
ou não um palíndromo.*/
#include <stdio.h>
const int tam=5;
void main(){
	char vet[tam];
	int k;
	for(k=0;k<tam;k++){
		printf("informe um caractere: ");
		scanf("%c",&vet[k]);
		fflush(stdin);
	}
	int verificar=0;
	for(k=0;k<tam;k++){
		if(vet[k]!=vet[tam-k-1]){
			verificar=1;
		}
	}
	if(verificar==0){
		printf("o vetor eh um palindromo");
	}
	else{
		printf("o vetor nao eh um palindromo");
	}
	getch();
}
