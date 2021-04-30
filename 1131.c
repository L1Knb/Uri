#include <stdio.h>

int main()
{
    int g,i,c=1,C,gg=0,gi=0,e=0;
    while(C!=2) {
        scanf("%d%d",&i,&g);
        if(g>i)gg++;
        else if(i>g)gi++;
        else if(i==g)e++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&C);
        if(C==2)break;
        else if(C==1)c++;
    }
    printf("%d grenais\n",c);
    printf("Inter:%d\n",gi);
    printf("Gremio:%d\n",gg);
    printf("Empates:%d\n",e);
    if(gi>gg)printf("Inter venceu mais\n");
    else if(gg>gi)printf("Gremio venceu mais\n");
    else printf("Nao houve vencedor\n");
    

    return 0;
}