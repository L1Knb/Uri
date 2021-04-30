#include <stdio.h>

int main()
{
    int i,n,h,m,o;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        scanf("%d%d%d",&h,&m,&o);
        if(o==0)printf("%02d:%02d - A porta fechou!\n",h,m);
        else if(o==1) printf("%02d:%02d - A porta abriu!\n",h,m);
    } 
    return 0;
}