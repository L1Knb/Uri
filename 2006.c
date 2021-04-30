#include <stdio.h>

int main()
{
    int a,b,c,d,e,t,s;
    scanf("%d",&t);
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if(a==t)s++;
    if(b==t)s++;
    if(c==t)s++;
    if(d==t)s++;
    if(e==t)s++;
    printf("%d\n",s);

    return 0;
}