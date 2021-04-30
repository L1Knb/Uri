#include <stdio.h>

int main()
{
    int i,n,x,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        scanf("%d",&x);
        if(x!=1)c++;
    }
    printf("%d\n",c);

    return 0;
}