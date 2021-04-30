#include <stdio.h>

int main()
{
    double s,ns,r;
    char p = '%';
    int x;
    scanf("%lf",&s);
    if (s>=0 && s<=400.00) 
    {
        r=s*.15;
        ns=r+s;
        x=15;
    }
    else if (s>=400.01 && s<=800.00) 
    {
        r=s*.12;
        ns=r+s;
        x=12;
    }
     else if (s>=800.01 && s<=1200.00) 
    {
        r=s*.10;
        ns=r+s;
        x=10;
    }
     else if (s>=1200.01 && s<=2000.00) 
    {
        r=s*.07;
        ns=r+s;
        x=7;
    }
     else if (s>2000) 
    {
        r=s*.04;
        ns=r+s;
        x=4;
    }   
    printf("Novo salario: %.2lf\n",ns);
    printf("Reajuste ganho: %.2lf\n",r);
    printf("Em percentual: %d %c\n",x,p);

    return 0;
}