#include <stdio.h>

int main()
{
    int a,b,r1,r2;
    scanf("%d%d",&a,&b);
    r1=a*b+(a-1)*(b-1);
    r2=(a-1+b-1)*2;
    printf("%d\n%d\n",r1,r2);
    return 0;
}
