#include<stdio.h>
#include<math.h>

int main(){
	int r = 0;
	float d = 0.0,util = 0.0, x1 = 0, y1 = 0, x2 = 0, y2 =0,p1,p2;
	
	printf("digite as cordenadas de x(x1,y1)\n");
	scanf("%f",&x1);
	scanf("%f",&y1);
	
	printf("digite as cordenadas de y(y1,y2)\n");
	scanf("%f",&x2);
	scanf("%f",&y2);
	
	printf("digite o raio\n");
	scanf("%d",&r);
	
	p1 = (x2-(x1));
	p1 = pow(p1,2);
	
	p2 = (y2-(y1));
	p2 = pow(p2,2);
	util = p2 +p1;
	
	r = r*2;
	
	d = sqrt(util);
	if(d > r){
		printf("nao colidiu");
	}else{
		printf("colidiu");
	}
	
	printf("%f-%f",d,r);
	
	
	
}
