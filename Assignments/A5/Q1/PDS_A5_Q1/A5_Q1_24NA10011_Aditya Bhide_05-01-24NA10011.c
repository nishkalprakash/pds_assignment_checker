// Program to rearrange elements of an array
// Code Creater=Aditya Samir Bhide
// Roll No:24NA10011 
#include<stdio.h>
void main()
{
  #define N 100
  int num[N];
  int n=0,negCount=0,temp,k=0,start,end,end2,start2;
  printf("Enter size of array :");
  scanf("%d",&n);
  printf("Enter its elements :");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&num[i]);
    if(num[i]<0)
    {
      negCount++;
    }
  }
  printf("\nOriginal Array : ");
  for(int k=0;k<n;k++)
  { 
    printf("%d ",num[k]);
  }
  for(int j=0;j<negCount;j++)
  {
    for(k=j;k<n;k++)
    {
      if(num[k]<0)
      {
        start=k;
      
      end=j;
      end2=num[end];
      start2=num[start];
      for(int m=end;m<start;m++)
      {
        num[m+1]=num[m];
      }
      num[end]=start2;
      }
    }
  }
  printf("\nRearranged Array : ");
  for(int k=0;k<n;k++)
  { 
    printf("%d ",num[k]);
  }
}

   
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

 
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    


