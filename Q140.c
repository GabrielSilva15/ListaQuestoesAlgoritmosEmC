/*140. Escreva um programa que leia v�rios n�meros inteiros e calcule a m�dia dos
n�meros pares e a m�dia dos n�meros �mpares. O processamento dever� ser
encerrado quando for lido o valor 0, que n�o dever� ser processado.*/
#include <stdio.h>
void main(){
	int n;
	int numimpar=0;
	int numpar=0;
	int somapar=0;
	int somaimpar=0;
	printf("informe um numero inteiro:");
	scanf("%d",&n);
	while(n!=0){
		if(n%2==0){
			somapar=somapar+n;
			numpar++;
		}
		else if(n%2==1){
			somaimpar=somaimpar+n;
			numimpar++;
		}
		printf("informe outro numero inteiro:");
		scanf("%d",&n);
	}
	float mediaimpar=somaimpar/numimpar;
	float mediapar=somapar/numpar;
	printf("a media dos numeros impar eh %.1f e a media dos numeros pares eh %.1f",mediaimpar,mediapar);
	getch();
}
