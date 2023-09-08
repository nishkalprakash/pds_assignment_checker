//Roll No:<23NA10017>
//Name:<Harshavarda Kumarasamy>

#include <stdio.h>

int main()
{
  int n, i, j, k;

  do{
    printf("enter a single digit number\n");
    scanf("%d", &n);
    if(n==5)
      {printf("enter a single digit number\n");
       scanf("%d", &i);
	if(i==1)
	  {printf("enter a single digit number\n");
	   scanf("%d", &j);
	   printf("enter a single digit number\n");
	   scanf("%d", &k);
	   if(k == 7)
	     {break;}
	  }
      }
  }while(n>=0);

  if(n>=0)
    {printf("pattern found\n");}

  return 0;
}
