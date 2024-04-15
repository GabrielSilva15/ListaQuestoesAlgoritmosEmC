#include <stdio.h>
#include <math.h>
void main(){
	float a,b,c;
	printf("informe os valores dos coeficientes da equaçao de  2 grau: ");
	scanf("%f%f%f",&a,&b,&c);
	float delta=pow(b,2) - 4*a*c;
	float raizDelta=sqrt(delta);
	if(raizDelta>0){
		float raiz1=((-b) + raizDelta)/ (2*a);
		float raiz2=((-b) - raizDelta)/ (2*a);
		printf("os valores da raizes reais dessa equaçao eh %f e %f",raiz1,raiz2);
	}
	else if(raizDelta==0){
		float raiz= -b/(2*a);
		printf("a raiz dessa equacao eh %f",raiz);
	}
	else{
		printf("essa equacao nao tem raiz real");
	}
}
