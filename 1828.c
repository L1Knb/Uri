#include <stdio.h>

int main()
{
    int i,n,t=1;
    char R[20],s[20],r[20];
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        scanf("%s%s",&s,&r);
        printf("Caso #%d: ",t++);
        if(strcmp(s,"tesoura")==0) {
            if(strcmp(r,"tesoura")==0)printf("De novo!\n");
            else if((strcmp(r,"lagarto")==0)||(strcmp(r,"papel")==0))printf("Bazinga!\n");
            else if((strcmp(r,"Spock")==0)||(strcmp(r,"pedra")==0))printf("Raj trapaceou!\n");
        }
        else if(strcmp(s,"papel")==0) {
            if(strcmp(r,"papel")==0)printf("De novo!\n");
            else if((strcmp(r,"pedra")==0)||(strcmp(r,"Spock")==0))printf("Bazinga!\n");
            else if((strcmp(r,"tesoura")==0)||(strcmp(r,"lagarto")==0))printf("Raj trapaceou!\n");
        }
        else if(strcmp(s,"pedra")==0) {
            if(strcmp(r,"pedra")==0)printf("De novo!\n");
            else if((strcmp(r,"lagarto")==0)||(strcmp(r,"tesoura")==0))printf("Bazinga!\n");
            else if((strcmp(r,"Spock")==0)||(strcmp(r,"papel")==0))printf("Raj trapaceou!\n");
        }
        else if(strcmp(s,"lagarto")==0) {
            if(strcmp(r,"lagarto")==0)printf("De novo!\n");
            else if((strcmp(r,"papel")==0)||(strcmp(r,"Spock")==0))printf("Bazinga!\n");
            else if((strcmp(r,"tesoura")==0)||(strcmp(r,"pedra")==0))printf("Raj trapaceou!\n");
        }
        else if(strcmp(s,"Spock")==0) {
            if(strcmp(r,"Spock")==0)printf("De novo!\n");
            else if((strcmp(r,"pedra")==0)||(strcmp(r,"tesoura")==0))printf("Bazinga!\n");
            else if((strcmp(r,"lagarto")==0)||(strcmp(r,"papel")==0))printf("Raj trapaceou!\n");
        }    
    }
    return 0;
}