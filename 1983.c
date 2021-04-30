#include <stdio.h>

int main()
{
    int i,n;
    scanf("%d",&n);
    long int m[n],e;
    double no[n],es;
    for(i=0;i<n;i++){
        scanf("%ld%lf",&m[i],&no[i]);
    }
    es=no[0];
    for(i=0;i<n;i++) {
        if(no[i]>es)es=no[i],e=m[i];
    }
    if(es<8)printf("Minimum note not reached\n");
    else printf("%ld\n",e);
    return 0;
}
