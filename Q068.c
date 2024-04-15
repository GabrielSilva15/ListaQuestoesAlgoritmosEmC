#include <stdio.h>
void main(){
	float salario;
	printf("informe o salario bruto");
	scanf("%f",&salario);
	float salariosemprevidencia=salario - salario*0.11;
	if(salariosemprevidencia<=1903.98){
		printf("o valor do salario liquido eh %f",salariosemprevidencia);
	}
	else if(salariosemprevidencia>=1903.99 && salariosemprevidencia<=2826.65){
		float imposto1 = salariosemprevidencia - (salariosemprevidencia*0.075);
		printf("o valor do salario liquido eh %f",imposto1);
	}
	else if(salariosemprevidencia>=2826.66 && salariosemprevidencia<=3751.05){
		float imposto2 = salariosemprevidencia - (salariosemprevidencia*0.15);
		printf("o valor do salario liquido eh %f",imposto2);
	}
	else if(salariosemprevidencia>=3751.06 && salariosemprevidencia<=4664.68){
		float imposto3 = salariosemprevidencia - (salariosemprevidencia*0.225);
		printf("o valor do salario dsa liquido eh %f",imposto3);
	}
	else if(salariosemprevidencia>=4664.69) {
		float imposto4 = salariosemprevidencia- - (salariosemprevidencia*0.275);
		printf("o valor do salario pow liquido eh %f",imposto4);
	}
}
