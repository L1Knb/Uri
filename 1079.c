#include <stdio.h>

int main()
{
    int N,i;
    float m,n1,n2,n3;
    scanf("%d",&N);
    for(i=1;i<=N;i++) {
        scanf("%f %f %f",&n1,&n2,&n3);
        m=(n1*2+n2*3+n3*5)/10;
        
        printf("%.1f\n",m);
    }
    return 0;
}