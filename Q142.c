/*142. O Banco do Povo est� realizando uma grande promo��o em seus financiamentos. Ele
financia qualquer valor em at� 240 presta��es. O valor da primeira presta��o
corresponde ao valor do empr�stimo dividido pelo n�mero de parcelas. Os valores
das demais presta��es correspondem ao valor da parcela anterior acrescido de uma
taxa de juros de 7%. Escreva um programa que leia o valor a ser financiado por um
cliente e o n�mero de presta��es desejadas e calcule: o valor de cada presta��o, o
valor total que o cliente vai pagar pelo empr�stimo e a diferen�a entre o valor a ser
pago e o valor financiado.*/
#include <stdio.h>
void main(){
	float financiamento;
	printf("informe o valor a ser financiado: ");
	scanf("%f",&financiamento);
	int parcelas;
	printf("informe em quantas parcelas deseja pagar esse valor: ");
	scanf("%d",&parcelas);
	float valorparcela=financiamento/parcelas;
	float valortotal=valorparcela;
	int cont=1;
	while(cont<=parcelas){
		printf("o valor da parcela %d eh %.2f\n",cont,valorparcela);
		valorparcela=valorparcela + (valorparcela*0.07);
		valortotal=valortotal+ valorparcela;
		cont++;
	}
	float diferenca=valortotal-financiamento;
	printf("o valor total pago do emprestimo pelo cliente eh %.2f e a diferen�a entre o valor pago e o valor financiado eh %.2f",valortotal,diferenca);
	getch();
}
