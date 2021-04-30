#include <stdio.h>

int main()
{
    double Y,N[100];
    int i;
    scanf("%lf",&Y);
    for(i=0;i<=99;i++) {
        N[i]=Y;
        Y/=2;
    }
        for(i=0;i<=99;i++) {
            printf("N[%d] = %.4lf\n",i,N[i]);
        }
    return 0;
}