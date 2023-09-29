//Roll No: 23ME30020
//Name: Kalepu Jyotiraditya

#include <stdio.h>
int main()
{
  int s,n,k=1;
  printf("Enter scale factor: ");  // Inputing scale
  scanf("%d",&s);
  printf("Enter number of lines: ");  // Inputing number of lines
  scanf("%d",&n);
  for(int i = 1; i<= n; i++)    // Loop to print different lines
    {
      for(int j = 1; j<=i; j++) // Loop to print values of a line
	{
	  printf("%d",k);
	  k++;
	  if(k == 4+s) k=1; // making k = 1 if condition is satisfied 
	}
      printf("\n");
    }
  return 0;
}


	  
	  
       
	  
