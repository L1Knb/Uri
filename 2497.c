#include <stdio.h>

int main()
{
    int n,v,i=1,a;
    while(a!=EOF) {
        scanf("%d",&n);
        if(n==-1)break;
        if(n%2==0) v=n/2;
		else v=(n-1)/2;
        printf("Experiment %d: %d full cycle(s)\n",i++,v);
    }
    return 0;
}