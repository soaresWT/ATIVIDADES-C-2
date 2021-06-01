#include<stdio.h>
//o unico caso onde uma divisao nao e possivel e
// 0 dividido por n
//porem irei considerar que a questao quer uma divisao que resulte
//em um inteiro
int main(){
	int a=0,b=0;
	
	printf("------digite numero------\n");
	scanf("%d",&a);
	
	printf("------digite numero------\n");
	scanf("%d",&b);
	
	if(a%b==1){
		printf("%d / %d nao e possivel uma divisao inteira\n",a,b);
	}else{
		printf("%d / %d e possivel uma divisao inteira\n",a,b);
	}
}
