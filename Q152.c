/*152. A matemática prova que números inteiros podem ser representados de maneira
única como um produto de potências de números primos distintos. Este produto é
chamado de decomposição em fatores primos do número e os expoentes são
chamados de multiplicidade do primo respectivo. Por exemplo, 360 = 23
x32
x5 e 21 =
3X7. Com base nessas informações, escreva um programa em pascal que obtenha a
decomposição em fatores primos de um número inteiro positivo informado pelo
usuário.*/
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
