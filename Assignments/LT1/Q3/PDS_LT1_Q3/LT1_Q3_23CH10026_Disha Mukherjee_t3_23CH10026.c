//Roll no.:23CH10026
//Name:Disha Mukherjee

#include <stdio.h>

int main()
{
  int s,n,m,i,c=1;
  printf("\nEnter scale factor:");
  scanf("%d",&s);
  printf("\nEnter number of lines:");
  scanf("%d",&n);
  for(m=1;m<=n;m++)//iteration for each line
    {
      for(i=1;i<=m;i++)//iteration for numbers in a line
	{
	  if(c==(4+s))//checks if c is greater than last value
	    c=1;
	  printf("%d",c);
	  c++;
	}
      printf("\n");
    }
  return 0;
}

      
	  
  
