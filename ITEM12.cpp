#include<stdio.h>

int main(){
	float nota = 0,
		nota2= 0,
		nota3=0,
		aluno1,
		aluno2;
		
		printf("digite as 3 notas do aluno 1 \n");
		scanf("%f",&nota);
		scanf("%f",&nota2);
		scanf("%f",&nota3);
		
		aluno1 = (nota+nota2+nota3)/3;
		
		printf("digite as 3 notas do aluno 2 \n");
		scanf("%f",&nota);
		scanf("%f",&nota2);
		scanf("%f",&nota3);
		
		aluno2 = (nota+nota2+nota3)/3;
		
		if(aluno1>aluno2){
			printf("aluno 1 foi melhor!!!");
		}else{
			printf("aluno 2 foi melhor!!!");
		}
		
}
