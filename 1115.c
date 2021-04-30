#include <stdio.h>

int main()
{
    int X,Y,i,p;
    while(p==0) {
       scanf("%d %d",&X,&Y);
       if(X==0||Y==0)p+=1; 
       if(X>0&&Y>0) {
           printf("primeiro\n");
       } else if(X<0&&Y>0) {
           printf("segundo\n");
       } else if(X<0&&Y<0) {
           printf("terceiro\n");
       } else if(X>0&&Y<0) {
           printf("quarto\n");
       }
    }
    

    return 0;
}