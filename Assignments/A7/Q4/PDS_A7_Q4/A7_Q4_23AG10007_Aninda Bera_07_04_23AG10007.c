# include <stdio.h>
# include <stdlib.h>
int main()
{
  int a[50],n;
  //to take input and create a array containing random integers
  printf("enter the number of random numbers u want to generate\n");
  scanf("%d",&n);
  for(int i=0;i<n;i++)
    {
      int q=rand()%41+10;
      a[i]=q;
    }
  //to print the elements of the array
  printf("The array elements are:\n");
  for(int j=0;j<n;j++)
    {
      printf("%d ",a[j]);
    }
  printf("\n");
  //to determine the triplets and their indices
  int u=0;
  while (u<(n-1))
    {
      for(int k=0;k<n;k++)
	{
	  if((k!=u)&&(k!=u+1))
	    {
	      if(a[u]+a[u+1]+a[k]==60)
		{
		  printf("values of triplet are:%d %d %d",a[u],a[u+1],a[k]);
		  printf("\n");
		  printf("indices of values are:%d %d %d",u,u+1,k);
		  printf("\n");
		}
	    }
	}
      u++;
    }
  return 0;
}
    
