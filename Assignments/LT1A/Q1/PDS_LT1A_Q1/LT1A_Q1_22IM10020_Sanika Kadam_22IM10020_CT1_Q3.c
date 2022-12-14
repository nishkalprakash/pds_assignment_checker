
//Printing all perfect number less than or equal to N

#include<stdio.h>

int perf_num(int N)  //function proto type

//Definition of function which check if number is perfect or not
{
 int i,sum=0;
  if(N/i==0)
     {
      for(i=2;i<=N;i++)
        {
          sum=sum+i;
          if(sum==N)
            {   
             return (N);
            }
        }
     }
 }

int main()
{
 int N;
 printf("Enter the number:");  //Enter any number
 scanf("%d",&N);

if(N>=10)
 for(int i=1;i<=N;i++)
   {
    printf("%d ",perf_num(i));
   }
else
  {
  printf("Invalid input\n");
  }
}    
