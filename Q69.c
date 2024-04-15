/* 269. Escreva um subprograma recursivo que receba como entrada um vetor de 10
números inteiros e um número inteiro N entre 1 e 10 e verifique se existe algum
número primo a partir da posição N do vetor.*/
#include <stdio.h>
	const int tam=10;
	int primo(int vet[],int n){
		int k;
		int div=0;
		if(tam==n){
			for(k=1;k<=vet[n-1];k++){
				if(vet[n-1]%k==0){
					div++;
				}
			}
			if(div==2){
				return 1;
			}
			return 0;
		}
			
		for(k=1;k<=vet[n-1];k++){
				if(vet[n-1]%k==0){
					div++;
				}
		}
		if(div==2){
				return 1 + primo(vet,n+1);
		}	
		return 0 + primo(vet,n+1);

	}

void main(){
	int vet[tam];
	int k;
	for(k=0;k<tam;k++){
		printf("informe um numero inteiro:");
		scanf("%d",&vet[k]);
	}
	int n;
	printf("informe um numero entre 1 e 10:");
	scanf("%d",&n);
	
	int veri=primo(vet,n);
	printf("existem %d numeros primos a partir da posição %d",veri,n);

	 getch();
}

