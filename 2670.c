#include <stdio.h>

int main()
{
    int a,b,c,r;
    scanf("%d%d%d",&a,&b,&c);
    r=a*2+c*2;
    if(a*4+b*2<r)r=a*4+b*2;
    if(c*4+b*2<r)r=c*4+b*2;
    printf("%d\n",r);

    return 0;
}
