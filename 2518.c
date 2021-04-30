#include <stdio.h>

int main()
{
    int n,h,c,l;
    double r;
    while(scanf("%d%d%d%d",&n,&h,&c,&l)!=EOF) {
        r=(n*1.0*sqrt(c*c + h*h)*l)/ 10000.0;
    printf("%.4lf\n",r);
    }
    return 0;
}