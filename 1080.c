#include <stdio.h>
int main()
{
    int x=0,i,b,c,e,d=0;
    for(i=1;i<=100;i++)
    {
        scanf("%d", &b);
        x++;
        if(b>d)
        {
            e=x;
            d=b;
        }
    }
    printf("%d\n",d);
    printf("%d\n",e);
    return 0;
}