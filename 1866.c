#include <stdio.h>

int main()
{
    int i,n,N;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        scanf("%d",&N);
        if(N%2==0) {
            printf("0\n");
        }
        else printf("1\n");
    }
    return 0;
}