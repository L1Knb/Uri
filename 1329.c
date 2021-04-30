#include <stdio.h>

int main()
{
    int x,y,n,m,i;
    while (scanf("%d",&n)) {
        if(n==0)break;
        x=0,y=0;
        for(i=1;i<=n;i++) {
            scanf("%d",&m);
            if(m==0)x++;
            if(m==1)y++;
        }    
        printf("Mary won %d times and John won %d times\n",x,y);
    }
    return 0;
}