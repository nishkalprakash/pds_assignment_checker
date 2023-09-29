// Roll No: 23CE10045
// Name: PRIYANSHU VERMA

#include<stdio.h>
int main()
{
  int s,n,i,j,num=1;
  printf("Enter scale factor: \n");
  scanf("%d",&s);
  printf("Enter number of lines: \n");
  scanf("%d",&n);
  printf("\n");

  for(i=0;i<n;i++)
    {
      for(j=0;j <= i;j++)
	{
	  if(num == (s+4))
	    {
	      num=1;
	    }
          printf("%d",num);
	  num++;
	}
      printf("\n");
    } 
  return 0;
}
