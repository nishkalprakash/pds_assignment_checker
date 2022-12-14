/*
 Sec      :14
 Name     :A.Tejasree Sai
 Roll no  :22CS10009
 Assignment no : Lab Test
 Description  : Printing Perfect numbers
*/

#include<stdio.h>
int per(int n);            // per represents perfect no
int main ()
{
  int N,i;
  printf("Enter an integer : \n");
  scanf("%d",&N);
  if (N>=6)
   {
     for(i=1;i<N;i++)
     {
       if (per(i)==1)
        {
          printf("%d is a perfect number\n",i);
        }
     }
   }
  else
   {
     printf("Invalid input");
   }
  
  return 0;
}

int per(int n)
{
 int sum=0,i;
 for(i=1;i<n;i++)
  {
    if(n%i==0)
     {
       sum+=i;
      }
    }
 if(sum==n)
 { 
   return(1);
 }
 else
return 0;
}

