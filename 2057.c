#include <stdio.h>

int main()
{
    int a,b,c,t;
    scanf("%d%d%d",&a,&b,&c);
    t=a+b+c;
    if(t>=24)t-=24;
    if(t<0)t+=24;
    printf("%d\n",t);

    return 0;
}