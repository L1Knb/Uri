#include <stdio.h>

int main()
{
    double a,a1,a2,a3,pi=3.14159265358979323846264338327950288;
    while(scanf("%lf",&a)!=EOF) {
		a3=(-a)*a*(3*(sqrt(3)-4)+2*pi)/3.0;
		a2=4*(a*a*(1-pi/4)-(a3)/2);
		a1=a*a-a2-a3;
		printf("%.3lf %.3lf %.3lf\n",a1,a2,a3);
	}
	return 0;
}
