#include <stdio.h>

int main()
{
    int T,i,c;
    double s;
    scanf("%d",&T);
    for(i=1;i<=T;i++) {
        c=0;
        scanf("%lf",&s);
        while(s>1) {
            s/=2;
            c++;
        }
        printf("%d dias\n",c);
    }
    return 0;
}