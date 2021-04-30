#include <stdio.h>

int main()
{
    int X,Y,I,s1,s2;
    scanf("%d %d",&X,&Y);
    if(X>Y) {
        s1=0;
        for(I=Y;I<=X;I++) {
            if(I % 13 != 0) {
                s1+=I;
            }
        }
        printf("%d\n",s1);
    } else if (Y>X) {
        s2=0;
        for(I=X;I<=Y;I++) {
            if(I % 13 != 0) {
                s2+=I;
            }    
        }
        printf("%d\n",s2);
    }   
    
    return 0;
}