/*153. Escreva um programa que leia dez n�meros inteiros e, ap�s finalizar a leitura,
imprima todos os n�meros lidos na mesma ordem em que eles foram digitados.*/
#include <stdio.h>
const int tam=10;
void main(){
	int vet[tam];
	int k;
	for(k=0;k<tam;k++){
		printf("informe um numero inteiro: ");
		scanf("%d",&vet[k]);
	}
	printf("os numeros foram informados nessa ordem: \n");
	for(k=0;k<tam;k++){
		printf("%d ",vet[k]);
	}
	getch();
}
