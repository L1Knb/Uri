#include <stdio.h>

int main()
{
    int N,i,X,d=0,f=0;
    scanf("%d",&N);
    for(i=1;i<=N;i++) {
        scanf("%d",&X);
        if(X>=10&&X<=20) {
            d++;
        } else { 
            f++;
        }    
    }
    printf("%d in\n%d out\n",d,f);
    return 0;
}