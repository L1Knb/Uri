#include <stdio.h>

int main()
{
    int a=0,g=0,d=0,p;
    while(p!=4) {
       scanf("%d",&p);
       if(p==1)a++;
       else if(p==2)g++;
       else if(p==3)d++;
    }
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",a,g,d);

    return 0;
}
