#include <stdio.h>

int main ()
{
    int q,v,s=0,n=0,i;
    scanf("%d",&q);
    for(i=0;i<q;i++) {
        scanf("%d",&v);
        if(v==1)n++;
        if(v==0)s++;
    }
    if(s>n)printf("Y\n");
    else printf("N\n");
}