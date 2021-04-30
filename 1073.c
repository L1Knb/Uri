#include <stdio.h>

int main()
{
    int N,i,r=1;
    scanf("%d",&N);
    for(i=2;i<=N;i=i+2) {
        r=(i*i);
        printf("%d^2 = %d\n",i,r);
        r=0;
    }
    return 0;
}