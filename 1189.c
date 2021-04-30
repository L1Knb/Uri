#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	 short L, C;
	 char op;
	 double M[12][12];
         long double S = 0;

	 scanf("%c", &op);

	 for(L = 0; L < 12; L++)
	 	 for(C = 0; C < 12; C++){
                     scanf("%lf", &M[L][C]);
                     
	             if(C < 5 && L > C && L + C < 11)   
                           S += M[L][C];
		 }    
	 

          if(op == 'S') printf("%.1Lf\n", S);

          else printf("%.1Lf\n", S/30);

	  return 0;
}