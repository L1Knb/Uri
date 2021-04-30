#include <stdio.h>

int main()
{
    int n,i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++) {
        scanf("%d",&n);
        if(n>8000)printf("Mais de 8000!\n");
        else printf("Inseto!\n");
    }
    return 0;
}