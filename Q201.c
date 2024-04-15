/*201. Escreva um programa que leia o número inteiro positivo e calcule o seu dobro, o seu
triplo, o seu quadrado, o seu cubo e a sua raiz quadrada. Cada uma das informações
solicitadas deve ser calculada através de um subprograma.*/
#include <stdio.h>
#include <math.h>

int dobro(int n){
	return n*2;
}

int triplo(int n){
	return n*3;
}

int quadrado(int n){
	return pow(n,2);
}

int cubo(int n){
	return pow(n,3);
}

int raiz(int n){
	return sqrt(n);
	
}
void main(){
	int num;
	printf("informe um numero inteiro positivo:");
	scanf("%d",&num);
	int valorDobro=dobro(num);
	int valorTriplo=triplo(num);
	int valorQuadrado=quadrado(num);
	int valorCubo=cubo(num);
	int valorRaiz=raiz(num);
	printf("o dobro do numero %d eh %d, o triplo %d, o quadrado %d, o cubo %d e a raiz eh %d",num,valorDobro,valorTriplo,valorQuadrado,valorCubo,valorRaiz);
	getch();
}

