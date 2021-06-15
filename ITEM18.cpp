#include<stdio.h>

int main(){
	
	int tipo=0;
	float conta = 0.0,total=0.0;
	
		while(tipo>3 || tipo<=0 ){
			printf("digite:\n 1 para residencial\n 2 para comercial\n 3 para industrial\n");
			scanf("%d",&tipo);
		}
	
	printf("quantidade de m3:");
	scanf("%f",&conta);
	
	switch(tipo){
		case 1:
			total = 5.0 + (conta*0.05);
			printf("residencial\n%0.2f reais",total);
			break;
		case 2:
			if(conta <=80){
				printf("comercial\n500 reais");
			}else{
				total = 500.0 + (conta*0.03);
				printf("comercial\n%0.2f",total);
			
			}
		break;
		case 3:
			if(conta <=100){
				printf("industrial\n 800 reais");
			}else{
				total = 800.0 + (conta*0.04);
				printf("comercial\n%0.2f",total);
			
			}
			
	}
}




