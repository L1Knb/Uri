#include <stdio.h>

int main()
{
    int p,n,c[100],i,d,j=0;
    scanf("%d%d",&p,&n);
    for(i=1;i<=n;i++) {
        scanf("%d",&c[i]);
    }
    d=c[1];
    for(i=1;i<=n-1;i++) {
        if(c[i]>c[i+1])d=c[i]-c[i+1]; 
        else d=c[i+1]-c[i];
        if(d>p)j++;
    } 
    if(j!=0)printf("GAME OVER\n");
    else printf("YOU WIN\n");
    return 0;
}