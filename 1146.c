#include <stdio.h>

int main()
{
    int X=1,i;
    while(X!=0) {
        scanf("%d",&X);
        for(i=1;i<X;i++) {
            printf("%d ",i);
        }
        if(X!=0) {
            printf("%d\n",X);
        }    
    }
    return 0;
}