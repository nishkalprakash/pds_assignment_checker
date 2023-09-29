//Roll no:23ME10025
//Name:Gargi Mukherjee
#include<stdio.h>
int main()
{
  int s,n,a,k;
  printf("Enter the scale factor in [1,6]");//taking scale factor as input
  scanf("%d",&s);
  a=1;
  k=3+s;
  printf("Enter the number of lines in [1,10]");//taking no of lines as input
  scanf("%d",&n);
  for (int i=1;i<=n;i++)//producing the pattern
    {
      for(int j=1;j<=i;j++)
	{
	  printf("%d",a);
	  a=a+1;
	  if(a>k)
	    a=1;
	}
      printf("\n");
    }
  return 0;
}
	    
	  
	
  
