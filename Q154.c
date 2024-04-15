/*154. Escreva um programa que leia dez números inteiros e, após finalizar a leitura,
imprima todos os números lidos na ordem inversa em que eles foram digitados.*/
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
	printf("\nos numeros informados em sua ordem inversa: \n");
	for(k=tam-1;k>=0;k--){
		printf("%d ",vet[k]);
	}
	getch();
}
