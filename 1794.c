#include <stdio.h>

int main ()
{
    int n,la,lb,sa,sb;
    scanf("%d%d%d%d%d",&n,&la,&lb,&sa,&sb);
    if(n>lb||n>sb||n<la||n<sa)printf("impossivel\n");
    else printf("possivel\n");
}
