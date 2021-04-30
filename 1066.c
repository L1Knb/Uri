#include <stdio.h>

int main()
{
    int a,i,p=0,n=0,pa=0,im=0;
    for(i=1;i<=5;i++) 
    {
        scanf("%d",&a);
        if(a%2==0) pa++;
        if(a%2==1||a%2==-1) im++;
        if(a>0) p++;
        if(a<0) n++;
    } 
    printf("%d valor(es) par(es)\n",pa);
    printf("%d valor(es) impar(es)\n",im);
    printf("%d valor(es) positivo(s)\n",p);
    printf("%d valor(es) negativo(s)\n",n);

    return 0;
}