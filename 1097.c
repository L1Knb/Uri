#include <stdio.h>

int main()
{
    int i,j,ni=7,no=5;
    for(i=1;i<=9;i=i+2)
    {
        for(j=ni;j>=no;j--) {
            printf ("I=%d J=%d\n",i,j);    
        }
        ni+=2;
        no+=2;
        
    }
    return 0;
}