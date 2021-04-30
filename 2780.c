#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    if(n<=800)printf("1\n");
    else if(n<=1400&&n>800)printf("2\n");
    else printf("3\n");
    return 0;
}