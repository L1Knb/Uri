#include <stdio.h>

int main()
{
    int i,v,s,n;
    double N;
    while(scanf("%d",&n)!=EOF) {
        for(i=1;i<=n;i++) {
            N=n;
            N/=3;
            N*=2;
            scanf("%d",&v);
            s+=v;
        }
        if(s<N)printf("acusacao arquivada\n");
        else  printf("impeachment\n");
        s=0;
        N=0;
    }
    return 0;
}