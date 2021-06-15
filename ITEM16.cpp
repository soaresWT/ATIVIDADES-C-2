#include<stdio.h>

int main(){
	float peso, altura, result;
	
	printf("digite peso em kg:");
	scanf("%f",&peso);
	
	printf("digite altura em metros:");
	scanf("%f",&altura);
	
	result = peso / (altura*altura);
	
	
	if(result<20)
	printf("magreza");
	
	if(result>25)
	printf("obeso");
	
	if(result<=25 && result>=20)
	printf("NORMAL");
	
	

}
