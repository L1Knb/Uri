#include <stdio.h>

int main()
{
    int n,i,t,r,q;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        scanf("%d%d",&t,&r);
        if(t%r==0) q=t/r;
        else q=t/r+1;
        printf("%d\n",q);
    }
    return 0;
}
