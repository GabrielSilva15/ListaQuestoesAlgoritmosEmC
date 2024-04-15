/*257. Escreva um subprograma recursivo que receba como entrada dois números inteiros
correspondentes aos valores da base e do expoente e calcule o valor da potenciação.
Você pode supor que o expoente é um valor não negativo e que o caso 00 é tratado
no programa principal (ou seja, não precisa ser tratado dentro do subprograma). */
#include <stdio.h>

	int potenciacao(int base,int expoente){
		if(expoente==0){
			return 1;
		}
		if(expoente==1){
			return base;
		}
		if(expoente<0){
			return base * potenciacao(base, (expoente*-1)-1);
		}
		
		return base * potenciacao(base,expoente-1);
	}

void main(){
		int base;
		printf("informe um numero inteiro para a base: ");
		scanf("%d",&base);
		int expoente;
		printf("informe um numeiro inteiro para o expoente:");
		scanf("%d",&expoente);
		int potenc=potenciacao(base,expoente);
		if(expoente<0){
			printf("1/%d",potenc);
		}
		else{
			printf("%d",potenc);
		}

	 getch();
}

