#include <stdio.h>

int main()
{
    char p[50];
    int res, i = 0;
    while(scanf("%s", &p)!=EOF) {
        if(strcmp (p,"esquerda")==0) {
            printf("ingles\n");
        } 
        if(strcmp (p,"direita")==0) {
            printf("frances\n");
        } 
        if(strcmp (p,"nenhuma")==0) {
            printf("portugues\n");
        } 
        if(strcmp (p,"as\0duas")==0) {
            printf("caiu\n");
        }
    }
    return 0;
}