/*149. Escreva um programa que leia vários itens de uma compra feita pelo usuário. Para
cada item, o usuário deve informar o seu nome, o seu preço unitário e a quantidade
comprada. Após cada leitura, o programa deve perguntar ao usuário se ele deseja
adicionar um novo item ou fechar a conta. O programa deve considerar que o
usuário irá digitar pelo menos um item. Após terminar a leitura, o programa deve
mostrar o valor da conta à vista e o valor da conta a prazo. O valor da conta a prazo
corresponde à soma do valor total de cada item digitado pelo usuário. O valor da
conta à vista corresponde ao valor da conta a prazo com um desconto de 15%.*/
#include <stdio.h>
void main(){
	char item[20];
	float preco;
	int quantidade;
	int sim=1;
	int resposta=0;
	float valoraprazo=0;
	float valoravista=0;
	while(sim==1){
		printf("informe o nome do item a ser comprado: ");
		scanf("%s",item);
		fflush(stdin);
		printf("informe o preço do item a ser comprado: ");
		scanf("%f",&preco);
		printf("informe a quantidade do item a ser comprado: ");
		scanf("%d",&quantidade);
		valoraprazo=valoraprazo + (preco*quantidade);
		printf("ainda deseja adicionar um novo item ou fechar a conta? Para adicionar digite 1 e para fechar digite 0: ");
		scanf("%d",&resposta);
		if(resposta==0){
			sim=0;
		}
	}
	valoravista=valoraprazo - (valoraprazo*0.15);
	printf("o valor da conta a vista eh %.2f e a prazo %.2f",valoravista,valoraprazo);
	getch();
}
