/*Escreva um programa que leia as tr�s notas de um aluno e verifique se o mesmo est�
aprovado por m�dia, se far� prova final ou se est� reprovado por m�dia. Caso o aluno
tenha que fazer a prova final, o programa deve informar quanto ele ter� que tirar na
prova. Voc� pode considerar que a m�dia m�nima para a aprova��o por m�dia � 7 e
que a m�dia m�nima para fazer a prova final � 4. O c�lculo da prova final � calculado
atrav�s da f�rmula abaixo.*/
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
