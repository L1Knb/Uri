#include <stdio.h>

int main()
{
    int X;
    double Y,KM;
    scanf("%d",&X);
    scanf("%lf",&Y);
    KM = X/Y;
    printf("%.3lf km/l\n",KM);

    return 0;
}