/*108. Escreva um programa que leia 20 n�meros entre 10000 e 99999 referente aos
n�meros dos deputados estaduais eleitos e identifique a quantidade de candidatos
que cada partido elegeu. O n�mero do partido do deputado pode ser identificado
pelos dois primeiros algarismos do n�mero do candidato. Por exemplo, um candidato
com n�mero 13457 concorre pelo PT, que � o partido de n�mero 13, enquanto que um
candidato com n�mero 45879 concorre pelo PSDB, que � o partido de n�mero 45.
Neste programa, considere os seguintes n�meros de partido: 13 (PT), 14 (PTB), 15
(PMDB), 25 (DEM), 45 (PSDB) e 65( PCdoB).*/
#include <stdio.h>
void main(){
	int cont=1;
	int num;
	int pt=0;
	int ptb=0;
	int pmdb=0;
	int dem=0;
	int psdb=0;
	int pcdob=0;
	while(cont<=5){
		printf("informe um numero entre 10000 e 99999 referente aos deputados eleitos: ");
		scanf("%d",&num);
		int identificacao=num/1000;
		if(identificacao==13){
			pt++;
		}
		if(identificacao==14){
			ptb++;
		}
		if(identificacao==15){
			pmdb++;
		}
		if(identificacao==25){
			dem++;
		}
		if(identificacao==45){
			psdb++;
		}
		if(identificacao==65){
			pcdob++;
		}
		cont++;
	}
	printf("o Partido do PT teve %d deputados eleitos, o Partido do PTB teve %d deputados eleitos,o Partido do PMDB teve %d deputados eleitos,o Partido do DEM teve %d deputados eleitos, o Partido do PSDB teve %d deputados eleitos,o Partido do PCdoB teve %d deputados eleitos",pt,ptb,pmdb,dem,psdb,pcdob);
	getch();
}
	
