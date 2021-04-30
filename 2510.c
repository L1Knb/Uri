#include <stdio.h>

int main()
{
    int i,T;
    char V[26];
    scanf("%d",&T);
    for(i=1;i<=T;i++) {
        scanf("%s",&V);
        if(V[0]=='B'&&V[1]=='a'&&V[2]=='t'&&V[3]=='m'&&V[4]=='a'&&V[5]=='i'&&V[6]=='n')printf("N\n");
        else printf("Y\n");
    }
    return 0;
}