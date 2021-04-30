#include <stdio.h>

int main(){
    double f,s,pi=atan(1.0)*4;;
    
    s = sin((108*pi)/180) / sin((63*pi)/180);
    while(scanf("%lf",&f) != EOF){
        printf("%.10lf\n",s*f);
    }
    return 0;
}