#include <stdio.h>

int main()
{
    float c,q,p;
    scanf("%f %f",&c,&q);
    if (c==1)
    p=q*4;
    else if (c==2)
    p=q*4.5;
    else if (c==3)
    p=q*5;
    else if (c==4)
    p=q*2;
    else if (c==5)
    p=q*1.5;
    printf("Total: R$ %.2f\n",p);

    return 0;
}