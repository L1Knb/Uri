#include <stdio.h>

int main()
{
    int a,i,c;
    for(i=1;i<=5;i++) {
        scanf("%d",&a);
        if (a%2==0)c++;
    }
    printf("%d valores pares\n",c);

    return 0;
}