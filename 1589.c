#include <stdio.h>

int main()
{
    int n1,n2,n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d%d",&n1,&n2);
        printf("%d\n",n1+n2);
    }    
    return 0;
}
