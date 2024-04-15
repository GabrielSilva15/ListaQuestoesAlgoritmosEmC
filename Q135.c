/*135. Escreva um programa que simule uma votação. O programa deve computar o voto de
20 eleitores e depois deve imprimir a quantidade e o percentual de votos recebidos
por cada candidato, bem como a quantidade e o percentual de votos nulos. As opções
de voto são:
[1] João Borracheiro
[2] Zé do caminhão
[3] Maria da bodega
[4] Ana
*/
#include <stdio.h>
void main(){
	int cont=1;
	int Joao=0;
	int Ze=0;
	int Maria=0;
	int Ana=0;
	int nulo=0;
	while(cont<=20){
		int voto;
		printf("informe o seu voto");
		scanf("%d",&voto);
		if(voto==1){
			Joao++;
			cont++;
		}
		else if(voto==2){
			Ze++;
			cont++;
		}
		else if(voto==3){
			Maria++;
			cont++;
		}
		else if(voto==4){
			Ana++;
			cont++;
		}
		else{
			nulo++;
			cont++;
		}
	}
	float percentualJoao= (Joao*100)/20;
	float percentualZe= (Ze*100)/20;
	float percentualMaria= (Maria*100)/20;
	float percentualAna= (Ana*100)/20;
	float percentualNulo= (nulo*100)/20;
	printf(" Joao teve %d votos com um percentual de %.1f%%, Ze teve %d votos com um percentual de %.1f%%, Maria teve %d votos com um percentual de %.1f%%, Ana teve %d votos com um percentual de %.1f%%, e a votaçao teve %d votos nulo com percentual de %.1f%%",Joao,percentualJoao,Ze,percentualZe,Maria,percentualMaria,Ana,percentualAna,nulo,percentualNulo);
	getch();
}
