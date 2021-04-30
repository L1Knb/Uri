#include <stdio.h>

int main()
{
    int F,H;
    float V,S;
    scanf("%d",&F);
    scanf("%d",&H);
    scanf("%f",&V);
    S = H * V;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n",F,S);

    return 0;
}