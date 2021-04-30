#include <stdio.h>

int
main ()
{
  int N,i,a,b,r=0,ii;
  scanf ("%d",&N);
  for (i=1;i<=N;i++)
    {
      scanf ("%d %d",&a,&b);
      if (a==b)
	{
	  r=0;
	  printf("%d\n", r);
	}
      else if (a<b)
	{
	  for (ii=a+1,r=0;ii<b;ii++)
	    {
	      if(ii%2==1 || ii%2==-1)r+=ii;
		  
	    }
	  printf ("%d\n",r);
	}
      else 
	{
	  for (ii=b+1,r=0;ii<a;ii++)
	    {
	      if (ii%2==1 || ii%2==-1)r+=ii;
		  
	    }
	    printf ("%d\n",r);
	}

      
    }

  return 0;
}