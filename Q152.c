/*152. A matem�tica prova que n�meros inteiros podem ser representados de maneira
�nica como um produto de pot�ncias de n�meros primos distintos. Este produto �
chamado de decomposi��o em fatores primos do n�mero e os expoentes s�o
chamados de multiplicidade do primo respectivo. Por exemplo, 360 = 23
x32
x5 e 21 =
3X7. Com base nessas informa��es, escreva um programa em pascal que obtenha a
decomposi��o em fatores primos de um n�mero inteiro positivo informado pelo
usu�rio.*/
#include <stdio.h>
void main(){
	int n;
	printf("informe um numero inteiro positivo: ");
	scanf("%d",&n);
	int primo=2;
	int div=0;
	int k;
	while(n>=primo){
		div=0;
		for(k=1;k<=primo;k++){
			if(primo%k==0){
				div++;
			}
		}
		if(div==2){
			if(n%primo==0){
				if(n/primo==1){
					printf("%d",primo);
					primo++;
				}
				else{
					printf("%d x ",primo);
					n=n/primo;
				}
			}
			else if(n%primo!=0){
				primo++;
			}
		}
		else{
			primo++;
		}
	}
	getch();
}
