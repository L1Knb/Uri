  
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
     char p[10], a = 3;
     short n;

     while(a--){
     	 n = 0;

	     while(1){
	         scanf("%s caw", p);

             if(!strcmp(p, "caw")) break;

	         if(p[0] == '*') n += 4;
	      	 if(p[1] == '*') n += 2;
	      	 if(p[2] == '*') n += 1;

	     } 

	     printf("%hd\n", n);
	 }

	 return 0;
}