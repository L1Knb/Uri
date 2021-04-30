#include<stdio.h>

int main()
{
   long long int n,a=0,b=1,c,C;
   int i,j;
   scanf("%d",&j);
   for(i=1;i<=j;i++,a= 0,b=1) {
       scanf("%lld",&n);
       n=n+1;
       for(C=0;C<n;C++) {
          if(C<=1)c=C;
          else
          {
             c=a+b;
             a=b;
             b=c;
          }
       }
          printf("Fib(%lld) = %lld\n",n-1,c);
   }
   return 0;
}