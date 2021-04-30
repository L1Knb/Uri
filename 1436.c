#include<stdio.h>

int main()
{
    int n;
    int j;
    int i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int a[12];
        int N;
        scanf("%d",&N);
        for(j=0;j<N;j++){
             scanf("%d",&a[j]);
        }
    printf("Case %d: %d\n",i,a[N/2]);

    }
    return 0;
}
