/*262. Escreva um subprograma recursivo que receba como entrada dois n�meros inteiros x
e y e calcule o quociente (a parte inteira) da divis�o de x por y. Para isso, n�o deve
ser usada a fun��o div. */
#include <stdio.h>
	int quoc(int x, int y){
		if(x<y){
			return 0;
		}
		return 1 + quoc(x-y,y);
	}

void main(){
	int num;
	printf("informe um numero inteiro: ");
	scanf("%d",&num);
	int num2;
	printf("informe um numero inteiro: ");
	scanf("%d",&num2);
	int quociente=quoc(num,num2);
	printf("o quociente da divisao de %d por %d eh %d",num,num2,quociente);

	 getch();
}

