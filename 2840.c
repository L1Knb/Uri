#include <stdio.h>
#include <math.h>

int main()
{
    int r,l;
    double v,pi=3.1415;
    scanf("%d%d",&r,&l);
    v=(4*pi*pow(r,3))/3;
    r=l/v;
    printf("%d\n",r);

    return 0;
}
