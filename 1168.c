#include <stdio.h>

int main()
{
    int n,i,s,j;
    char l[1000];
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        scanf("%s",&l); 
        s=0;
        for(j=0;j<strlen(l);j++) {
            if(l[j]=='1')s+=2;
            else if(l[j]=='2')s+=5;
            else if(l[j]=='3')s+=5;
            else if(l[j]=='4')s+=4;
            else if(l[j]=='5')s+=5;
            else if(l[j]=='6')s+=6;
            else if(l[j]=='7')s+=3;
            else if(l[j]=='8')s+=7;
            else if(l[j]=='9')s+=6;
            else if(l[j]=='0')s+=6;
        }
        printf("%d leds\n",s);
    }
    return 0;
}