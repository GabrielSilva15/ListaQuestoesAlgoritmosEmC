/*214. Em um determinado concurso público, para cada questão que um candidato acerta
ele ganha 5 pontos, para cada questão que ele erra ele perde 3 pontos e para cada
questão que ele deixa em branco ele não ganha e nem perde pontos. Escreva um
programa que leia o número de questões que um candidato acertou, o número de
questões que ele errou e o número de questões que ele deixou em branco e
determine a sua pontuação final. A pontuação deve ser calculada através de um
subprograma, que deve receber como entrada o número de questões certas, o
número de questões erradas e o número de questões em branco.*/
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
