#include <stdio.h>

int main()
{
    char a;
    int i;
    for(i=97,a='a';i<=122,a<='z';i++,a++) {
        printf("%d e %c\n",i,a);
    }
    return 0;
}