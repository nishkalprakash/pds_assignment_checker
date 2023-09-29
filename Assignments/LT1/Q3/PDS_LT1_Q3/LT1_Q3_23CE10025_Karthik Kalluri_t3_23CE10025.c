//23CE10025
//KARTHIKK KALLURI
#include <stdio.h>
int main()
{
  int s;
  printf("Enter the value of scale factor\n");
  scanf("%d",&s);
  if(s<1||s>6)
    {
      printf("The value of  s is in valid\n");
    }
  int n;
  printf("enter  the number of lines\n");
  scanf("%d",&n);
  if(n<1||n>10)
    {
      printf("the number of lines are invalid\n");
    }
  int x=3+s;
  for(int i=1;i<=n;i++)
    {
      for(int j=1;j<=x;j++)
	{
	  printf("%d",j);
	  if(j==i)
	    {
	      break;
	    }
	}
      printf("\n");
      
    }





      return 0;
    }



  

