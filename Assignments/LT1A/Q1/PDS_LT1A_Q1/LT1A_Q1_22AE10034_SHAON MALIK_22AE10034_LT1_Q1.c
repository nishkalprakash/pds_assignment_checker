/*
 Section 14
 Roll No: 22AE10034
 Name: Shaon Malik
 Test-1 Set-A
 Question No : 1
 Description :program to find perfect numbers 
*/

#include <stdio.h>

int perfect(int n)
{
  int sum=0;
  for(int j=1;j<n;j++)
  {
    if(n%j==0)
       sum+=j;
  }
 if(sum==n)
  return 1;
 else
  return 0;
}

int main()
{
	int N,n,i,sum;//declaring variables
	printf("Enter the number :");
	scanf("%d",&N);
	if(N>1)
	{
	  for(int i=2;i<N;++i)
          {
            int check=perfect(i);
            if(check==1)
               printf("%d ",i);
          }
        }

    else //for numbers less than equal to 1
    {
    	printf("invalid input");
    }
    
	   return 0;
}


