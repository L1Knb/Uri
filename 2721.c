#include <stdio.h>

int main()
{
    int i,a,b,c,d,e,f,g,h,j,s,C=0;
    scanf("%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&j);
    s=a+b+c+d+e+f+g+h+j;
    for(i=s;i>0;i--) {
        C++;
        if(C>9)C=1;
    }
    if (C==1)printf("Dasher\n");
    else if (C==2)printf("Dancer\n");
    else if (C==3)printf("Prancer\n");
    else if (C==4)printf("Vixen\n");
    else if (C==5)printf("Comet\n");
    else if (C==6)printf("Cupid\n");
    else if (C==7)printf("Donner\n");
    else if (C==8)printf("Blitzen\n");
    else if (C==9)printf("Rudolph\n");
    return 0;
}