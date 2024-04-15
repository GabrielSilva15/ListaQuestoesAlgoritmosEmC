/*212. Escreva um programa que leia o número total de questões existentes em uma prova
e o número de questões que um candidato acertou e determine o seu percentual de

acertos e o seu percentual de erros. O cálculo deve ser realizado através de um
subprograma.*/
#include <stdio.h>

float percentualacertos(float questoes,float certas){
	float acertos=(certas/questoes) * 100;
	return acertos;
}

float percentualerros(float questoes,float certas){
	float erros=((questoes-certas)/questoes) * 100;
	return erros;
}


void main(){
	float questoes;
	printf("informe o numero de questoes da prova: ");
	scanf("%f",&questoes);
	float acertos;
	printf("informe o numero de  acertos do aluno na prova: ");
	scanf("%f",&acertos);
	float percentacertos=percentualacertos(questoes,acertos);
	printf("%.2f\n",percentacertos);
	float percenterros=percentualerros(questoes,acertos);
	printf("%.2f",percenterros);
}
