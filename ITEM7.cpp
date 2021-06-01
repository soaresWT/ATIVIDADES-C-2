#include<stdio.h>

int main(){
	int n1=0,n2=0;
	
	printf("------digite numero------\n");
	scanf("%d",&n1);
	
	printf("------digite numero------\n");
	scanf("%d",&n2);
	
	if(50<n1<200 && -1<n2<9){
		printf("------------\n");
		printf("1\n");
	}else{
			printf("------------\n");
			printf("0\n");
	}
}
