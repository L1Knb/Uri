#include <stdio.h>

int main()
{
    int i;
   char s[]="---------------------------------------";
   char t[]="|  decimal  |  octal  |  Hexadecimal  |";
    printf("%s\n",s);
    printf("%s\n",t);
    printf("%s\n",s);
    for(i=0;i<16;i++) {
        printf("|     %2d    |   %2o    |       %X       |\n",i,i,i);
    }
    printf("%s\n",s);
}