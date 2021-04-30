#include <stdio.h>

int main()
{
    int i,x,z=1,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(x=1;x<=3;x++) {
            printf("%d ",z);
            z++;
        }
        z++;
        printf("PUM\n");
    }
    return 0;
}