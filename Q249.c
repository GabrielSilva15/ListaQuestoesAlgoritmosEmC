/*249. Escreva um programa que leia quatro n�meros reais e verifique se eles formam, na
ordem em que foram digitados, uma progress�o aritm�tica, uma progress�o
geom�trica, os dois tipos de progress�o ou nenhum tipo de progress�o. Esta
verifica��o deve ser realizada atrav�s de um subprograma. */
#include <stdio.h>
	
	void progressao(float n1,float n2,float n3,float n4){
		float arit1=n2-n1;
		float arit2=n4-n3;
		
		float r=n2/n1;
		
		
		
		if(arit1==arit2 && n3==r*n2 && n4==n3*r){
			printf("Progressao Aritmetica e Geometrica");
		}
		
		else if(arit1==arit2){
			printf("Progressao Aritmetica");
		}
		else if(n3==r*n2 && n4==r*n3 ){
			printf("Progressao Geometrica");
		}
		else{
			printf("nao eh nenhum tipo de progressao");
		}
	}

void main(){
	float n1,n2,n3,n4;
	printf("informe quatro numeros reais:");
	scanf("%f%f%f%f",&n1,&n2,&n3,&n4);
	progressao(n1,n2,n3,n4);
	getch();
}

