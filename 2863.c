#include <stdio.h>

int main()
{
    int i,n;
    double t[99],m;
    while(scanf("%d",&n)!=EOF) {
        for(i=1;i<=n;i++) {
        scanf("%lf",&t[i]);
        }
        m=t[1];
        for(i=1;i<=n;i++) {
            if(t[i]<m)m=t[i];
        }
        printf("%.2lf\n",m);
    }
    return 0;
}
