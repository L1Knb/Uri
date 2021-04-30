#include <stdio.h>
 
int main()
{
	int V,N[10],i;
	scanf("%d",&V);
	for(i=0;i<=9;i++) {
	    N[i]=V;
	    printf("N[%d] = %d\n",i,N[i]);
	    V*=2;
	}

	return 0;
}