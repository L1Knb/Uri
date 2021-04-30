#include <stdio.h>

int main()
{
    int x,y,t;
    scanf("%d%d%d",&t,&x,&y);
    if(x+y<=t)printf("Farei hoje!\n");
    else printf("Deixa para amanha!\n");
    return 0;
}