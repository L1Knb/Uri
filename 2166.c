#include <stdio.h>
int main()
{
    double num = 0.0;
    int i,n;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        num+=2.0;
        num = 1.0/num;
    }
    num += 1.0;
    printf("%.10lf\n", num);
    return 0;
}