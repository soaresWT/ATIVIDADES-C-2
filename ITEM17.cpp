#include<stdio.h>

int main(){
	float aulas=0, present=0;
	float nota=0.0, nota2=0,media=0,falt=0.0,af;
	
	printf("total de aulas:");
	scanf("%f",&aulas);
	
	printf("aulas presentes:");
	scanf("%f",&present);
	
	printf("NOTA1:");
	scanf("%f",&nota);
	
	printf("NOTA2:");
	scanf("%f",&nota2);
	
	falt = present / aulas;
	falt = falt*100.0;
	media = (nota + nota2)/2.0;
	
	printf("%0.1f|PORCENTO\n",falt);
	
	
	if(falt>=75){
		if(media>=7)
		printf("APROVADO NA MEDIA:%0.2f",media);
		if(media<4)
		printf("REPROVADO:%0.2f",media);
		if(media>4 && media<7){
			printf("PORFAVOR DIGITE A NOTA DA AVALIACAO FINAL:");
			scanf("%f",&af);
			
			media = (media+af)/2.0;
			
			if(media<5){
				printf("REPROVADO:%0.2f",media);
			}else{
				printf("APROVADO:%0.2f",media);
			}
			
			
		}
		
		
	}else{
		printf("reprovado por falta!!");
		printf("MEDIA:%0.2f",media);
	}
	
	
	
}
