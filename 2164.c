#include <stdio.h>
#include <math.h>

int main()
{
    double n,ne,p;
    scanf("%lf",&n);
    p=(1+sqrt(5))/2.0;
    ne=(1-sqrt(5))/2.0;
    n=(pow(p,n)-pow(ne,n))/sqrt(5);
    printf("%.1lf\n",n);

    return 0;
}