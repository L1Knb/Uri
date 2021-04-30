#include <stdio.h>

int main()
{
   int a,b,c,MAB,MAC;
   scanf("%d",&a);
   scanf("%d",&b);
   scanf("%d",&c);
   MAB=(a+b+abs(a-b))/2;
   MAC=(MAB+c+abs(MAB-c))/2;
   printf("%d eh o maior\n",MAC);
    return 0;
}