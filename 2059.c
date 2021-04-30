#include <stdio.h>
int main()
{
    int p, j1, j2, r, a, ven, so;
    scanf("%d %d %d %d %d", &p, &j1, &j2, &r, &a);
    so = j1 + j2;
    if((so%2==0 && p==1) || (so%2==1 && p==0)) ven = 1;
    else ven = 2;
    if((r==1 && a==0) || (r==0 && a==1)) ven = 1;
    else if(r==1 && a==1) ven=2;
    printf("Jogador %d ganha!\n", ven);
    return 0;
}