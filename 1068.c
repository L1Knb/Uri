#include <stdio.h>

int main(){
    char l[1001];
    int i,esq,dir;
    while(scanf("%s",&l)!= EOF){
        esq=0;
        dir=0;
        for(i=0;l[i]!='\0';i++){
            if(l[i]=='(')esq++;
            else if (l[i]==')'){
                dir++;
                if(esq>0){
                    esq--;
                    dir--;
                }
            }
        }
        if(esq==0&&dir==0)printf("correct\n");
        else printf("incorrect\n");
    }
    return 0;
}