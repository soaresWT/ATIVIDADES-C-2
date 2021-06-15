#include <stdio.h>
#include <stdlib.h>

int main() {
    int matri;
    float vhn, vahoex, valacr, salab, saliq, desc;
    float numhn, numhre, depen, imp, valthtb, valtdp, valthre;
    char nm[20];
    
    printf("folha de pagamento mensal \n");
    printf("Digite o valor da hora normal: ");
    scanf("%f", &vhn);
    printf("Digite o valor da hora extra: ");
    scanf("%f", &vahoex);
    printf("Digite o valor do acrescimo: ");
    scanf("%f", &valacr);
    
    printf("Digite a matricula: ");
    scanf("%d", &matri);
    printf("Digite o nome do func.: ");
    scanf("%s", &nm);
    printf("Digite o numero de horas normais: ");
    scanf("%f", &numhn);
    printf("Digite o numero de horas extras trabalhadas: ");
    scanf("%f", &numhre);
    printf("Digite o numero de dependentes: ");
    scanf("%f", &depen);
    
    
    valthtb = numhn*vhn;
    valtdp = valacr*depen;
    valthre = numhre*vahoex; 
    salab = valtdp + valthtb + valthre; 
    

    if(100<=salab && salab<=500){
        desc = (salab*0.05)+30;
        saliq = salab-desc;
            printf("\nMatricula: %d\n", matri);
            printf("Nome: %s\n", nm);
            printf("Salario Bruto: %0.2f\n", salab);
            printf("Descontos: %0.2f\n", desc);
            printf("Salario Liquido: %0.2f\n", saliq);
        
    } else if(501<=salab && salab<=1300){
        desc = ((salab*0.08)+(salab*0.08))+80;
        saliq = salab-desc;
            printf("Matricula: %d\n", matri);
            printf("Nome: %s\n", nm);
            printf("Salario Bruto: %0.2f\n", salab);
            printf("Descontos: %0.2f\n", desc);
            printf("Salario Liquido: %0.2f\n", saliq);
    } else if(1301<=salab && salab<=2700){
        desc = (salab*0.15)+(salab*0.10)+150;
        saliq = salab-desc;
            printf("Matricula: %d\n", matri);
            printf("Nome: %s\n", nm);
            printf("Salario Bruto: %0.2f\n", salab);
            printf("Descontos: %0.2f\n", desc);
            printf("Salario Liquido: %0.2f\n", saliq);
    } else {
        desc = (salab*0.25)+(salab*0.12)+320;
        saliq = salab-desc;
            printf("Matricula: %d\n", matri);
            printf("Nome: %s\n", nm);
            printf("Salario Bruto: %0.2f\n", salab);
            printf("Descontos: %0.2f\n", desc);
            printf("Salario Liquido: %0.2f\n", saliq);
    }
}
