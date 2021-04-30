#include <stdio.h>

int main()
{
    double N1,N2,N3,N4,N5,M;
    scanf("%lf %lf %lf %lf",&N1,&N2,&N3,&N4);
    M=(N1*2+N2*3+N3*4+N4)/10;
    printf("Media: %.1lf\n",M);

    if (M >= 7.0){

        printf("Aluno aprovado.\n");
    }
    else if (M >= 5.0)
    {
        printf("Aluno em exame.\n");
        scanf("%lf", &N5);
        printf("Nota do exame: %.1f\n", N5);
        if (N5 + M / 2.0 > 5.0){
            printf("Aluno aprovado.\n");
        }
        else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", (N5 + M) / 2.0);
    }
    else{
        printf("Aluno reprovado.\n");
    }
     return 0;

}