#include <stdio.h>

int main() {
 
    int t,n,k,i,r;
    scanf("%d",&t);
    for(i=1;i<=t;i++) {
        scanf("%d%d",&n,&k);
        r=(n%k)+(n/k);
        printf("%d\n",r);
    }
    return 0;
}