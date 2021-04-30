#include <stdio.h>

int main()
{
    int T,i,PA,PB,c;
    double G1,G2;
    scanf("%d",&T);
    for(i=1;i<=T;i++) {
        c=0;
        scanf("%d %d %lf %lf",&PA,&PB,&G1,&G2);
        while(PA<PB) {
            PA+=(((float)PA/100)*G1);
            PB+=(((float)PB/100)*G2);
            c++;
            if(PA==PB)c++;
            if(c>100)break; 
            
        }
        if(c>100) printf("Mais de 1 seculo.\n");
        else printf("%d anos.\n",c);
    }
    return 0;
}