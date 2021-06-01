#include<stdio.h>

int main(){
	int num;
	
	printf("------digite numero------\n");
	scanf("%d",&num);
	
	if(num%2==0){
		printf("o numero %d e par",num);
	}else{
		printf("o numero %d e impar",num);
	}
}
