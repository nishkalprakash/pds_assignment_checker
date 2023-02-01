//Assignment 11
//Section 14
//Name:Sanika Kadam
//Question 2


#include<stdio.h>

//recursive function to generate fibonacci sequence

int fibonacci(int N)
{
   int sum,flag;
   if(N==0)
      return 0;
   if(N==1)
      return 1;
   else 
      return fibonacci(N-1)+fibonacci(N-2);
}





int main()
{
  int N,key;
  int flag=0;
  
  printf("Enter number you want to find: ");//Enter number you want to find in fibonacci sequence
  scanf("%d",&key);
  printf("Enter number N:");//Enter number greater than number you want to find
  scanf("%d",&N);

 
//loop to find number

  for(int i=0;i<N;i++)
  {
   if(key==fibonacci(i)) 
    {
     flag=1;
     break;
    }
   else
     flag=0;
  }

  if(flag==1)
    printf("Yes\n");
  else
    printf("No\n");
 
  return 0;
}


  
  
