#include <stdio.h>

int main()
{
    char Vendedor[256];
    double s,v,sf;
    scanf("%s",&Vendedor);
    scanf("%lf",&s);
    scanf("%lf",&v);
    sf = s+((v/100)*15);
    printf("TOTAL = R$ %.2lf\n",sf);

    return 0;
}