#include <stdio.h>

int main ()
{
  int S=2002,s;
  while(s!=S) {
      scanf("%d",&s);
      if(s==S) {
          printf("Acesso Permitido\n");
      } 
      else {
          printf("Senha Invalida\n");
      }
  }
  return 0;
}