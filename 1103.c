#include <stdio.h>

int main()
{
    int h1,h2,m1,m2,t,t1,t2;
    while(1) {
        scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
        if(h1==0&&m1==0&&h2==0&&m2==0)break;
        if(h1==0)h1=24;
        if(h2==0)h2=24;
        t1=(h1*60)+m1;
        t2=(h2*60)+m2;
        if(t1<t2)t=t2-t1;
        else t=t2-t1+24*60;
        printf("%d\n",t);
    }
    return 0;
}