#include <stdio.h>

int main()
{
    double A,B,C,a,b,c,d,e,pi;
    pi = 3.14159;
    scanf("%lf",&A);
    scanf("%lf",&B);
    scanf("%lf",&C);
    a = (A*C)/2;
    b = pi*(C*C);
    c = ((A+B)*C)/2;
    d = B*B;
    e = A*B;
    
    printf("TRIANGULO: %.3lf\n",a);
    printf("CIRCULO: %.3lf\n",b);
    printf("TRAPEZIO: %.3lf\n",c);
    printf("QUADRADO: %.3lf\n",d);
    printf("RETANGULO: %.3lf\n",e);

    return 0;
}