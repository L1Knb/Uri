#include <stdio.h>

int main()
{
    int a;
    while(scanf("%d",&a)!=EOF) {
        if(a>=0&&a<90||a==360)printf("Bom Dia!!\n");
        if(a>=90&&a<180)printf("Boa Tarde!!\n");
        if(a>=180&&a<270)printf("Boa Noite!!\n");
        if(a>=270&&a<360)printf("De Madrugada!!\n");
    }
    return 0;
}