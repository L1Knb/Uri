#include <stdio.h>

int main()
{
    int j,i;
    char j1[20],j2[20];
    scanf("%d",&j);
    for(i=0;i<j;i++) {
        scanf("%s",j1);
        scanf("%s",j2);
        if(j1[1] == 'e') {
            if(j2[1] == 'e')printf("Sem ganhador\n");
            if(j2[1] == 'a')printf("Jogador 1 venceu\n");
            if(j2[1] == 't')printf("Jogador 2 venceu\n");
        }
        if(j1[1] == 'a') {
            if(j2[1] == 'e')printf("Jogador 2 venceu\n");
            if(j2[1] == 'a')printf("Ambos venceram\n");
            if(j2[1] == 't')printf("Jogador 2 venceu\n");
        }
        if(j1[1] == 't') {
            if(j2[1] == 'e')printf("Jogador 1 venceu\n");
            if(j2[1] == 'a')printf("Jogador 1 venceu\n");
            if(j2[1] == 't')printf("Aniquilacao mutua\n");
        }
    }

    return 0;
}