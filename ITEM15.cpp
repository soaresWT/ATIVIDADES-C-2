#include<stdio.h>

int main(){
	int x = -1;
	
	while(x<0){
		printf("digite uma idade valida:");
		scanf("%d",&x);
	}
	
	if(x>=0 && x<10)
	printf("crianca");
	
	if(x>=10 && x<20)
	printf("adolecente");
	
	if(x>=20 && x<30)
	printf("jovem");
	
	if(x>=30 && x<=40)
	printf("adulto");
	
	if(x>40)
	printf("melhor idade");
	
	
}
