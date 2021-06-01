#include<stdio.h>

int main(){
	int a=0,b=0,c=0;
	
	printf("------digite numero------\n");
	scanf("%d",&a);
	
	printf("------digite numero------\n");
	scanf("%d",&b);
	
	printf("------digite numero------\n");
	scanf("%d",&c);
	
	if(a>b && a>c){
		printf("o numero maior e %d",a);

	}else{
		if(b>c){
			printf("o numero maior e %d",b);	
		}else{
				printf("o numero maior e %d",c);	
		}
	
	}
	
}
