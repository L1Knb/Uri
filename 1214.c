#include <stdio.h>
 
int main()
{
	int N,n,i,I,no[1000],am,s;
	double p,me;
	scanf("%d",&N);
	for(I=1;I<=N;I++) {
		scanf("%d",&n);
		s=0;
		am=0;
		p=0;
		for(i=1;i<=n;i++) {
			scanf("%d",&no[i]);
			s+=no[i];
		} 
		me=s/n;
		for(i=1;i<=n;i++) {
		    if(no[i]>me)am++;
		    p=((float)100/n)*am;
		}
	printf("%.3lf%\n",p);	
	}
	
	return 0;
}