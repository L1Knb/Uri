#include <stdio.h>

int main()
{
    int a,n,i,q;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a);
        if(a<2015) {
            q=a-2015;
            printf("%d D.C.\n",q*-1);
        }
        else {
            q=2014-a;
            printf("%d A.C.\n",q*-1);
        }
    }
    return 0;
}