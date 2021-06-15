#include<stdio.h>

int main(){
	float 
		salario = 0,
		valorHora = 0,
		total = 0,
		hoex = 0,
		hora = 0;
		
		
	int NuDepen = 0;
		
	
	printf("digite salario:");
	scanf("%f",&salario);
	
	printf("digite numero de dependente:");
	scanf("%d",&NuDepen);
	
	printf("digite numero de horas trabalhadas:");
	scanf("%f",&hora);
	
	printf("digite numero de horas extras trabalhadas:");
	scanf("%f",&hoex);
	
	valorHora = salario / 2.0;
	total = (salario * hora)+(NuDepen*32.0)+(valorHora+(valorHora*0.5));
	
	if(total<200){
		printf("ISENTO, valor do salario e:%0.2f",total+100.0);
	}else{
		if(total>=200 && total<=500){
			float x = total -(total*0.1);
			if(x<350){
				salario = x + 100;
				printf("valor do salario e:%0.2f",salario);
			}else{
				salario = x + 50;
				printf("valor do salario e:%0.2f",salario);
			}
		}
		if(total>500){
			float x =  total -(total*0.2);
			if(x<350){
				salario = x + 100;
				printf("valor do salario e:%0.2f",salario);
			}else{
				salario = x + 50;
				printf("valor do salario e:%0.2f",salario);
			}
		}
		
	}
	
	

}
