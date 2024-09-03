// Program to rearrange elements of an array
// Code Creater=Aditya Samir Bhide
// Roll No:24NA10011 
#include<stdio.h>
void main()
{
  #define N 100
  int num[N];
  int n=0,doupCount=0;
  printf("Enter size of array :");
  scanf("%d",&n);
  printf("Enter its elements :");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&num[i]);
  }
  for(int k=0;k<n;k++)
  {
    doupCount=0;
    for(int m=k+1;m<n;m++)
    {
      if(num[k]==num[m])
      {
      doupCount++;
      break;
      }
    }
    if(doupCount==0)
    {printf("Duplicates :\n");
    printf("%d (%d)",num[k],doupCount);}
  }
  
}

   
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

 
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    


