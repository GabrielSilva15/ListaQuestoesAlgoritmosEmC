/*Escreva um programa que leia as três notas de um aluno e verifique se o mesmo está
aprovado por média, se fará prova final ou se está reprovado por média. Caso o aluno
tenha que fazer a prova final, o programa deve informar quanto ele terá que tirar na
prova. Você pode considerar que a média mínima para a aprovação por média é 7 e
que a média mínima para fazer a prova final é 4. O cálculo da prova final é calculado
através da fórmula abaixo.*/
#include <stdio.h>
void main(){
	float n1,n2,n3;
	printf("informe as tres nota de um aluno:");
	scanf("%f%f%f",&n1,&n2,&n3);
	float mediaParcial= (n1+n2+n3)/3;
	float provafinal= (25-(3*mediaParcial))/2;
	if(mediaParcial>=7){
		printf("O aluno esta aprovado por media");
	}
	else if(mediaParcial>=4 && mediaParcial<7){
		printf("o aluno precisa de %.2f para ser aprovado",provafinal);
	}
	else{
		printf("o aluno esta reprovado");
	}
	getch();
}
