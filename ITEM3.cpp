#include<stdio.h>

int main(){
	int a,b;
	
	printf("------digite numero------\n");
	scanf("%d",&a);
	
	printf("------digite numero------\n");
	scanf("%d",&b);
	
	if(a!=b){
		if(a>b){
			printf("o numero maior e %d",a);
		}else{
				printf("o numero maior e %d",b);
		}
	}else{
		printf("erro: valores iguais");	
	}
	

}
