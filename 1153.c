#include <stdio.h>

int main()
{
    int x,i,s=1;
    scanf("%d",&x);
    for(i=1;i<=x;i++) {
        s*=i;
    }
    printf("%d\n",s);
    return 0;
}