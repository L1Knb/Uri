#include <stdio.h>

int main()
{
    char c[15];
    int i,ii;
    
    scanf("%s",&c);
    for(i=0;i<3;i++)printf("%c",c[i]);
    printf("\n");
    for(i=4;i<7;i++)printf("%c",c[i]);
    printf("\n");
    for(i=8;i<11;i++)printf("%c",c[i]);
    printf("\n");
    for(i=12;i<14;i++)printf("%c",c[i]);
    printf("\n");
    return 0;
}