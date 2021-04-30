#include <stdio.h>

int main()
{
    int n[4],i;
        
    for(i=1;i<=4;i++) {
        scanf("%d",&n[i]);
    }    
        if(n[1]==1)printf("1\n");
        else if(n[2]==1)printf("2\n");
        else if(n[3]==1)printf("3\n");
        else printf("4\n");
    
    return 0;
}