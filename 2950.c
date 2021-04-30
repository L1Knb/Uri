#include <stdio.h>

int main()
{
    int x,y,z;
    double r;
    scanf("%d%d%d",&z,&x,&y);
    r=z;
    r=r/(x+y);
    printf("%.2lf\n",r);

    return 0;
}