#include <stdio.h>

int main()
{
    int n,i,p,q,P;
    double s=0.0;
    scanf("%d",&p);
    for(i=1;i<=p;i++) {
        scanf("%d %d",&P,&q);
        if(P==1001)s+=(double)1.5*q;
        else if(P==1002)s+=(double)2.5*q;
        else if(P==1003)s+=(double)3.5*q;
        else if(P==1004)s+=(double)4.5*q;
        else s+=(double)5.5*q;
    }    
    printf("%.2lf\n",s);
    return 0;
}