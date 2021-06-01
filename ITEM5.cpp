#include<stdio.h>

int main(){
	int a=0,b=0,c=0;
	
	printf("------digite numero------\n");
	scanf("%d",&a);
	
	printf("------digite numero------\n");
	scanf("%d",&b);
	
	
	if(a>b){
		c = a%b;
		printf("maior %d menor %d\n",a,b);	
		printf("resto: %d",c);
			
	}else{
			c = b%a;
				printf("maior %d menor %d\n",a,b);
			printf("resto: %d",c);	
	}
	
	
}
