#include <stdio.h>

int main()
{
    long long A,B,s,i;
        scanf("%lld %lld", &A, &B);
        s=(A+B)*(B-A+1)/2;
        printf("%lld\n",s);
    return 0;
}
