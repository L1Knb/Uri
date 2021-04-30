#include <stdio.h>

int main()
{
    int i,n;
    double ii;
    char p[10000];
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        scanf("%s",&p);
        ii=strlen(p);
        ii/=100;
        printf("%.2lf\n",ii);
    }
    return 0;
}