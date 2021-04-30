#include <stdio.h>

int main()
{
    int i;
    char d[256],b[256];
    scanf("%s",&d);
    for(i=0;i<8;i++) {
        b[i]=d[i];
    }
    d[0]=b[3];
    d[1]=b[4];
    d[3]=b[0];
    d[4]=b[1];
    for(i=0;i<8;i++) {
        printf("%c",d[i]);
    }
    printf("\n");
    d[0]=b[6];
    d[1]=b[7];
    d[3]=b[3];
    d[4]=b[4];
    d[6]=b[0];
    d[7]=b[1];
    for(i=0;i<8;i++) {
        printf("%c",d[i]);
    }
    printf("\n");
    b[2]='-';
    b[5]='-';
    for(i=0;i<8;i++) {
        printf("%c",b[i]);
    }
    printf("\n");
    
    return 0;
}