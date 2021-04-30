#include <stdio.h>
 
int main() {
    
int N, I,r1, r2;
scanf ("%d",&N);
for(I=1; I <=N; I++) {
    r1=I*I;
    r2=I*I*I;
    printf ("%d %d %d\n", I, r1, r2);
}
    return 0;
}