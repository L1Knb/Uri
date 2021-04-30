#include <stdio.h>

int main()
{
    int C1,Q1,C2,Q2;
    float P1,P2,T;
    scanf("%d  %d  %f",&C1, &Q1, &P1);
    scanf("%d  %d  %f",&C2, &Q2, &P2);
    T=Q1*P1+Q2*P2;
    printf("VALOR A PAGAR: R$ %.2f\n",T);
    
    return 0;
}
