/*147. Escreva um programa que imprima todos os palíndromos existentes no intervalo
[1000, 9999]. Um número é palíndromo quando o seu valor lido da esquerda para a

direita é idêntico ao valor lido da direita para a esquerda. Exemplos: 1001, 2002,
1221, 8888.*/
#include <stdio.h>
void main(){
	int n;
	int milhar;
	int centena;
	int dezena;
	int unidade;
	int resto;
	int k;
	for(k=1000;k<=9999;k++){
		milhar=k/1000;
		resto=k%1000;
		centena=resto/100;
		resto=resto%100;
		dezena=resto/10;
		resto=resto%10;
		unidade=resto;
		int reverso=(unidade*1000) + (dezena*100) + (centena*10 + milhar);
		if(reverso==k){
			printf("o numero %d eh palindromo   ",reverso);
		}
	}
	getch();
}
