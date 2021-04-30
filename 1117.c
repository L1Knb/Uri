#include <stdio.h>

int main()
{
    int i;
    float n,m,s;
    while(i!=2) {
        scanf("%f",&n);
        if(n<0||n>10) {
            printf("nota invalida\n");
        } 
        else if(n>=0&&n<=10) {
            i++;
            s+=n;
        }
    }
    m=s/2;
    printf("media = %.2f\n",m);
    

    return 0;
}