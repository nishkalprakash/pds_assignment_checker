//roll number 23ME10063
//name Prem Pastagia
//Set 1 Question 3
#include <stdio.h>

int main()
{
  int s,n,i,j,a=1;
  //user input
  printf("Enter the scale factor[1,6]\n");
  scanf("%d",&s);
  printf("Enter the number of lines [1,10]\n");
  scanf("%d",&n);

  // code for line printing

  for(i=1;i<=n;i++)
    {
      for(j=1;j<=i;j++)
	{
	  if(a==(4+s)){a=1;}
	  printf("%d",a);
	  a++;
	}
      printf("\n");
    }
  
  return 0;
}
