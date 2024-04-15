/*249. Escreva um programa que leia quatro números reais e verifique se eles formam, na
ordem em que foram digitados, uma progressão aritmética, uma progressão
geométrica, os dois tipos de progressão ou nenhum tipo de progressão. Esta
verificação deve ser realizada através de um subprograma. */
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

