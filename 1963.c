#include <stdio.h>

int main()
{
    double a,b,p;
    scanf("%lf %lf",&a,&b);
    p=((b-a)*100)/a;
    printf("%.2f%\n",p);

    return 0;
}