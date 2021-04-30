#include <stdio.h>

int main ()
{
int a,b;
scanf("%d%d",&a,&b);
if(b<=2)printf("nova\n");
else if (a<b&&b<=96&&b>=3)printf("crescente\n");
else if (b>=97&&b<=100)printf("cheia\n");
else if (a>b&&b>=3&&b<=96)printf("minguante\n");
}
