/*222. O Banco do Povo está realizando uma grande promoção em seus financiamentos. Ele
financia qualquer valor em 5 prestações. O valor da primeira prestação corresponde
à 20% do valor do empréstimo. Os valores das demais prestações correspondem ao
valor da parcela anterior acrescido de uma taxa de juros de 7%. Escreva um
programa que leia o valor a ser financiado por um cliente e calcule: o valor de cada
prestação, o valor total que o cliente vai pagar pelo empréstimo e o total de juros
que o cliente vai pagar pelo empréstimo. O programa deve ter um subprograma para
calcular o valor de cada parcela do empréstimo.*/
#include <stdio.h>

float parcela1(float valor){
	float primeira=valor*0.2;
	return primeira;
}

float parcela2(float valor){
	float anterior=parcela1(valor);
	float segunda= anterior + (anterior*0.07);
	return segunda;
}

float parcela3(float valor){
	float anterior=parcela2(valor);
	float terceira= anterior + (anterior*0.07);
	return terceira;
}

float parcela4(float valor){
	float anterior=parcela3(valor);
	float quarta= anterior + (anterior*0.07);
	return quarta;
}

float parcela5(float valor){
	float anterior=parcela4(valor);
	float quinta= anterior + (anterior*0.07);
	return quinta;
}

void main(){
	float emprestimo;
	printf("informe o valor que um cliente financiara: ");
	scanf("%f",&emprestimo);
	float parc1=parcela1(emprestimo);
	float parc2=parcela2(emprestimo);
	float parc3=parcela3(emprestimo);
	float parc4=parcela4(emprestimo);
	float parc5=parcela5(emprestimo);
	float valortotal= parc1 + parc2 + parc3 + parc4 + parc5;
	float juros= valortotal - emprestimo;
	printf("A parcela 1 o cliente pagara R$%.2f, na parcela 2 o cliente pagara R$%.2f, na parcela 3 o cliente pagara R$%.2f, na parcela 4 o cliente pagara R$%.2f, na parcela 5 o cliente pagara R$%.2f\n",parc1,parc2,parc3,parc4,parc5);
	printf("O valor total que o Cliente ira pagar pelo financiamento eh R$%.2f e pagara R$%.2f de juros",valortotal,juros);
	getch();
}
