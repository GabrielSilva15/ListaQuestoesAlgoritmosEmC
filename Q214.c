/*214. Em um determinado concurso p�blico, para cada quest�o que um candidato acerta
ele ganha 5 pontos, para cada quest�o que ele erra ele perde 3 pontos e para cada
quest�o que ele deixa em branco ele n�o ganha e nem perde pontos. Escreva um
programa que leia o n�mero de quest�es que um candidato acertou, o n�mero de
quest�es que ele errou e o n�mero de quest�es que ele deixou em branco e
determine a sua pontua��o final. A pontua��o deve ser calculada atrav�s de um
subprograma, que deve receber como entrada o n�mero de quest�es certas, o
n�mero de quest�es erradas e o n�mero de quest�es em branco.*/
#include <stdio.h>

void pontuacao(int acertos,int erros, int branco){
	int pontAcertos=acertos*5;
	int pontErros=erros*3;
	int pontFinal= pontAcertos - pontErros;
	printf("o usuario pontuou %d",pontFinal);
}

void main(){
	int certas;
	printf("informe o numero de questeos que ousuaroia acertou: ");
	scanf("%d",&certas);
	int erro;
	printf("informe o numero de questeos que ousuaroia errou: ");
	scanf("%d",&erro);
	int branca;
	printf("informe o numero de questeos que ousuaroia deixou em branco:");
	scanf("%d",&branca);
	pontuacao(certas,erro,branca);
}
