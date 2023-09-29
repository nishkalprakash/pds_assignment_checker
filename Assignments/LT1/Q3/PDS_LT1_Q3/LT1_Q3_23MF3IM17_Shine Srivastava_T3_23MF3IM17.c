//Roll no. = 23MF3IM17
//Name = Shine Srivastava

#include<stdio.h>
int main()
{
  int n,s;
  printf("Enter number of lines,scale factor : \n");
  scanf("%d %d",&n,&s);
  while(n > 6 || n < 1 || n>10 ||n<1)
    {
      printf("wrong input");
      printf("Enter number of lines,scale factor: \n");
      scanf("%d %d",&n,&s);
    }
      
  for(int i=0;i<n;i++)
    {
      for(int k=0;k<i;k++)
	{
	 
	    printf("%d",k+1);
	   
	    
	}
      printf("\n");
    }
}
      
