#include <stdio.h>

int main()
{
    int i,f,n;
    char N[256];
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        scanf("%s %d",&N,&f);
        if(N[0]=='T'&&N[1]=='h'&&N[2]=='o'&&N[3]=='r') {
            printf("Y\n");
        }
        else printf("N\n");
    }
    return 0;
}
