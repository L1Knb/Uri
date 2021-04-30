#include <stdio.h>

int main()
{
    int i,n,s;
    for(i=1;i<=4;i++) {
        scanf("%d",&n);
        s+=n-1;
    }
    printf("%d\n",s+1);

    return 0;
}