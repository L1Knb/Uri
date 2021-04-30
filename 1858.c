#include <stdio.h>

int main()
{
    int n,i,t,ii,s=1;
    scanf("%d",&n);
    int v[n];
    for(i=0;i<n;i++) {
        scanf("%d",&v[i]);
    }
    t=v[0];
    for(ii=0;ii<n;ii++) {
        if(v[ii]<t){ 
            t=v[ii];
            s=ii+1;
        }
    }
    printf("%d\n",s);

    return 0;
}