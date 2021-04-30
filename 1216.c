#include <stdio.h>

int main()
{
    char n[256];
    double d,r,c=0,s;
    while(scanf("%s%lf",&n,&d)!=EOF) {
        c++;
        s+=d;
    }
    r=s/c;
    printf("%.1lf\n",r);

    return 0;
}