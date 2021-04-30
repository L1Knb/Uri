#include <stdio.h>

int main()
{
    int i,rep, n = 0;
    char p[5], p0,p1,p2;
    scanf("%d", &rep);
    while(rep--){
        scanf("%s",&p);
        if (strlen(p) == 5)
                n = 3;
        else
            for (i = 0; i < 6; i++){
            if (p[i] == '\0')
                break;
            p0 = p[0];
            p1 = p[1];
            p2 = p[2];
        if ((p0 == 'o' && p1 == 'n') || (p0 == 'o' && p2 == 'e') || (p1 == 'n' && p2 == 'e'))
            n = 1;
        else
            n = 2;
        }
    printf("%d\n", n);
    }
    return 0;
}
