//Roll No:<23Na10017>
//Name:<Harshavarda Kumarasamy>

#include <stdio.h>
#include <stdlib.h>

int main()
{int x[49], n, i, j, k, a;

  printf("Input number of integral values required:\n");
  scanf("%d", &n);

  for(a=0;a<n;a++)
    {x[a]=rand()%40 + 10;
      printf("%d\n", x[a]);}
  
  for(i=0;i<n;i++)
  {for(j=i+1;j<n-1;j++)
      {for(k=j+1;k<n;k++)
	  {if(x[i]+x[j]+x[k]==60)
	      {printf("array indices=%d,%d,%d, ", i, j, k);
	       printf("Stored values=%d,%d,%d \n", x[i], x[j], x[k]);
	      }
	  }
      }
  }
return 0;
}

  

  

  
