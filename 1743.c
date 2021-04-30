#include <stdio.h>

int main()
{
    int i,x[5],y[5],r=0;
    for(i=1;i<=5;i++) {
        scanf("%d",&x[i]);
    }
    for(i=1;i<=5;i++) {
        scanf("%d",&y[i]);
    }
    for(i=1;i<=5;i++) {
       r+=fabs(x[i]-y[i]);
    }
    if(r==5)printf("Y\n");
    else printf("N\n");

    return 0;
}
