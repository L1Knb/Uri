#include <stdio.h>

int main()
{
     int n,i,p,p1=0,p2=0,p3=0,p4=0,p5=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        scanf("%d",&p);
        if(p%2==0)p2++;
        if(p%3==0)p3++;
        if(p%4==0)p4++;
        if(p%5==0)p5++;
    }
    printf("%d Multiplo(s) de 2\n%d Multiplo(s) de 3\n%d Multiplo(s) de 4\n%d Multiplo(s) de 5\n",p2,p3,p4,p5);

    return 0;
}