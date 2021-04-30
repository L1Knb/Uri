#include <stdio.h>

 
int main() {
 
    double V,D,al,ar,pi = 3.14;
    
    while(scanf("%lf%lf", &V, &D)!=EOF) {
        
        D /= 2;
        al = V/(pi*(D*D));     
        
        ar = pi*(D*D);
        
        printf("ALTURA = %.2lf\n",al);
        printf("AREA = %.2lf\n",ar);
        
    }  
    return 0;
}