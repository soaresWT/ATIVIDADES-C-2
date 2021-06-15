#include<stdio.h>

int main(){
	float
		notaP = 0,
		mediaP = 0,
		notaT = 0,
		notaEF = 0,
		dis = 0;
		
		printf("nota do projeto:");
		scanf("%f",&notaP);
		
		printf("media das praticas:");
		scanf("%f",&mediaP);
		
		printf("nota do teste:");
		scanf("%f",&notaT);
		
		printf("nota do exame final:");
		scanf("%f",&notaEF);
		
		dis = (notaP*0.25)+(mediaP*0.1)+(notaT*0.2)+(notaEF*0.45);
		
		if(dis>8 && notaEF>7.5 && notaP>9.5){
			
			printf("APROVADO!!!");
			
			
		}else{
			printf("REPROVADO!!!");
		}
		
}

