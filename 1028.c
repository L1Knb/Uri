#include <stdio.h>

int main()
{
    int n1,n2,r,n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d%d",&n1,&n2);
        r=n1%n2;
        while(r!=0) {
            n1=n2;
            n2=r;
            r=n1%n2;         
        }
        printf("%d\n",n2);
    }    
    return 0;
}