#include<stdio.h>

int main(){
	int num1 = 0,num2 = 0, num3 = 0,x=0;
	
	printf("digite 3 numeros\n");
	
	scanf("%d",&num1);
	scanf("%d",&num2);
	scanf("%d",&num3);
	
	if(num1>num2 && num1>num3){
		if(num2>num3){
			printf("%d-%d-%d",num1,num2,num3);
		}else{
				printf("%d-%d-%d",num1,num3,num2);
		}
	}
	
		
	if(num2>num1 && num2>num3){
		if(num1>num3){
			printf("%d-%d-%d",num2,num1,num3);
		}else{
				printf("%d-%d-%d",num2,num3,num1);
		}
	}
	
	if(num3>num1 && num3>num2){
		if(num2>num1){
			printf("%d-%d-%d",num3,num2,num1);
		}else{
				printf("%d-%d-%d",num3,num1,num2);
		}
	}
	
}
