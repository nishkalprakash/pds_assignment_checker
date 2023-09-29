# include <stdio.h>
int main()
{
  int s,n;
  printf("Enter the number of lines\n");
  scanf("%d",&n);
  printf("Enter the scale factor between [1,6]\n");
  scanf("%d",&s);
  int y=1;
  for (int i=0;i<n;i++) //for no. of lines
    {
      for(int j=0;j<=i;j++) //for checking the bound of numbers
	{
	  printf("%d",y);
	  y++;
	  if(y==s+4) //condition for resetting the value whenever u overflow the scale factor
	    {
	      y=1;
	    }
	}
      printf("\n");
    }
  return 0;
}
	
    
