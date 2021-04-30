#include <stdio.h>

int main()
{
    int p,s,t;
    scanf("%d%d%d",&p,&s,&t);
   if(p>s)
    {
        if(s>t)
        {
            if((s-t)<(p-s)) printf(":)\n");
            else printf(":(\n");
        }
        else printf(":)\n");
    }
    else if(s>p)
    {
        if(t>s)
        {
            if((t-s)<(s-p)) printf(":(\n");
            else printf(":)\n");
        }
        else printf(":(\n");
    }
    else if(t>s) printf(":)\n");
    else printf(":(\n");

    return 0;
}