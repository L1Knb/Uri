#include <stdio.h>
 
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		int a = log2(n);
		printf("%d\n",a);	
	}
	return 0;
}