#include <stdio.h>

int main()
{
    long long int a,b,V,A,F,c=1;
    while(scanf("%lld%lld",&a,&b)!=EOF) {
        V=(a*5+b*6)/2;
        A=V+2-(a+b);
        printf("Molecula #%lld.:.\n",c++);
        printf("Possui %lld atomos e %lld ligacoes\n\n",A,V);
    }
    return 0;
}
