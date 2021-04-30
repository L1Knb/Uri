#include <stdio.h>

int main()
{
    int i,w,x,y,z,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        y=i*i;
        z=y*i;
        printf("%d %d %d\n",i,y,z);
        w=y+1;
        x=z+1;
        printf("%d %d %d\n",i,w,x);
    }
    return 0;
}