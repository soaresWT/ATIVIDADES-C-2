#include<stdio.h>

int main(){
	int i =0 ,
		a = 0,
		b = 0,
		c = 0;
		
		while(i>3 || i<=0 ){
			printf("porfavor digitar um numero entre 1 e 3\n");
			scanf("%d",&i);
		}
		printf("digite valor de a\n");
		scanf("%d",&a);
		
		printf("digite valor de b\n");
		scanf("%d",&b);
		
		printf("digite valor de c\n");
		scanf("%d",&c);
		
		switch(i){
			case 1:
				
				if(a>b && a>b){
					if(b>c){
						printf("%d-%d-%d",c,b,a);
					}else{
							printf("%d-%d-%d",b,c,a);
					}
			}
			
				
			if(b>a && b>c){
				if(a>c){
					printf("%d-%d-%d",c,a,b);
				}else{
						printf("%d-%d-%d",a,c,b);
				}
			}
			
			if(c>a && c>b){
				if(a>b){
					printf("%d-%d-%d",b,a,c);
				}else{
						printf("%d-%d-%d",a,b,c);
				}
			}
			break;	
				
			case 2:
				if(a>b && a>b){
					if(b>c){
						printf("%d-%d-%d",a,b,c);
					}else{
							printf("%d-%d-%d",a,c,b);
					}
			}
			
				
			if(b>a && b>c){
				if(a>c){
					printf("%d-%d-%d",b,a,c);
				}else{
						printf("%d-%d-%d",b,c,a);
				}
			}
			
			if(c>a && c>b){
				if(a>b){
					printf("%d-%d-%d",c,a,b);
				}else{
						printf("%d-%d-%d",c,b,a);
				}
			}
			break;
			
			case 3:
				if(a>b && a>c){
					printf("%d-%d-%d",b,a,c);
				}
				if(b>a && b>a){
					printf("%d-%d-%d",a,b,c);
				}
				if(c>a&&c>b){
					printf("%d-%d-%d",a,c,b);
				}
				
				break;		
				}	
	
	
}
