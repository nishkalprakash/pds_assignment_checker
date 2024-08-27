// Program to prompt the user to enter a sequence of positive integer values
// Code Creater=Aditya Samir Bhide
// Roll No:24NA10011 
#include<stdio.h>
#include<math.h>
void main()
{
  int n=0,max_s=-1,max_f=-1;
  printf("\nEnter the numbers : \n");
  for(int i=1;i>0;i++)
  {
    scanf("%d",&n);
      if(n<0) // if negative value entered, to terminate the program
      {
        break;
      }
      if(i==1) // if only 1st number entered yet
      {
        max_f=n;
        printf("Largest number = %d\n",max_f);
        printf("Second largest number : Value not yet entered\n");
        continue;
      }
      if(n>=max_f) //checking for maximum condition, then assigning values accordingly
      {
       max_s=max_f;
       max_f=n;
      }
      else if(max_s<n)
      {
       max_s=n;
      }
      printf("Largest number = %d\n",max_f);
      printf("Second largest number : %d\n",max_s);
    }
  }

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    


