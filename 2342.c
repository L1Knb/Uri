#include <stdio.h>

int main()
{
    int x,y,z,s,b;
    char c[0];
    scanf("%d",&x);
    b=x;
    scanf("%d%s%d",&y,&c,&z);
    if(c[0]=='+')s=y+z;
    else if(c[0]=='*')s=y*z;
    if(s<=b)printf("OK\n");
    else printf("OVERFLOW\n");
    return 0;
}