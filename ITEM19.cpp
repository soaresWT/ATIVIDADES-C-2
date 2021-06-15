#include<stdio.h>

int main(){
	int pec = 0,x=0;
	float salarios = 0.0,sb=440.00;
	
	printf("digite a quantidade de peca:");
	scanf("%d",&pec);

	
	if(pec<=500){
		printf("o salario e:%0.2f",sb);
	}

	
	if(pec>500 && pec<=750){
		x = pec-500;
		salarios = sb + (x*0.5);
		printf("o salarios e:%0.2f",salarios);
	}
	if(pec>750){
		x = pec - 750;
		salarios = sb + 550 + (x*0.75);
		printf("o salarios e:%0.2f",salarios);
	}
}
