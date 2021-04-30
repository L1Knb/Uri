#include <stdio.h>

int main()
{
    int N[1000],T,i,I;
    scanf ("%d", &T);
    for(i=0,I=0;i<1000; i++)
    {
        printf("N[%d] = %d\n",i,I);
        I++;
        if(I==T)I=0;
    }
    return 0;
}