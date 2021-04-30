#include <stdio.h>

int main()
{
    int x,y;
    while(scanf("%d%d",&x,&y)!=EOF) {
        x+=x;
        x*=y;
        printf("%d\n",x);
    }
    return 0;
}