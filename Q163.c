/*163. O IFPB precisa de um programa que fa�a a corre��o autom�tica das provas do seu
teste de sele��o. A prova, que � a mesma para todos os alunos, consiste de dez
quest�es objetivas, cuja resposta deve ser (a, b, c, d ou e). O programa deve ler o
gabarito da prova e, a seguir, o nome de um candidato e as op��es que aparecem no
seu cart�o de respostas. Para cada candidato, o programa deve imprimir o seu
percentual de acertos. O processamento deve ser encerrado quando for encontrado
um candidato com o nome  �fim�, que n�o deve ser processado. O programa deve
imprimir tamb�m a pontua��o m�dia dos candidatos.*/
#include <stdio.h>
#include <string.h>
const int tam=10;
void main(){
	char gabaritoprova[tam];
	char gabaritoaluno[tam];
	int k;
	int cont=0;
	int alunos=0;
	int media=0;
	char nome[20];
	char fim[15];
	
	printf("informe o gabarito da prova do teste de selecao: \n");
	for(k=0;k<tam;k++){
		printf("Questao %d: ",k+1);
		scanf("%c",&gabaritoprova[k]);
		fflush(stdin);
	}
	
	printf("informe o nome de um Aluno: ");
	scanf("%s",nome);
	fflush(stdin);
	
	strcpy(fim,"fim");
	int veri=strcmp(nome,fim);
	
	while(veri==1){
		alunos++;
		for(k=0;k<tam;k++){
		printf("informe o gabarito das questoes: ");
		scanf("%c",&gabaritoaluno[k]);
		fflush(stdin);
		}
		
		for(k=0;k<tam;k++){
			if(gabaritoprova[k]==gabaritoaluno[k]){
				cont++;
			}
		}
		
		printf("o  aluno %s e ele acertou %d",nome,cont);
		media=media+cont;
		
		printf("\n informe o nome de um Aluno: ");
		scanf("%s",nome);
		fflush(stdin);
		veri=strcmp(nome,fim);
	}
	float pontuacaomedia=media/alunos;
	printf(" a media geral dos alunos foi %.1f ",pontuacaomedia);
	getch();
}
