#include <stdio.h>

int main()
{
    int x,z,c,i,s;
    scanf("%d",&x);
    while(x>=z){
        scanf("%d",&z);
    }
    
    for(i=x,s=0;s<z;i++){
        s+=i;
        c++;
    }
    printf("%d\n",c);
    return 0;
}