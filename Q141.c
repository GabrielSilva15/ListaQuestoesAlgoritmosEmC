/*141. Escreva um programa que leia três números inteiros positivos e calcule o MMC dos
números lidos.*/
#include <stdio.h>
void main(){
	int n,n2,n3;
	printf("informe tres numeros inteiros positivos: ");
	scanf("%d%d%d",&n,&n2,&n3);
	int div=2;
	int mmc=1;
	while(n!=1 || n2!=1 || n3!=1){
		if(n%div==0 || n2%div==0 || n3%div==0){
			if(n%div==0){
				n=n/div;
			}
			if(n2%div==0){
				n2=n2/div;	
			}
			if(n3%div==0){
				n3=n3/div;
			}
			mmc=mmc*div;
		}
		else{
			div++;
		}
	}
	printf("o mmc do tres numero eh %d",mmc);
	getch();
}
