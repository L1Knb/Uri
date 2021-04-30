#include <stdio.h>

int main()
{
    char l[1000];
    gets(l);
    if(strlen(l)>80)printf("NO\n");
    else printf("YES\n");
    return 0;
}