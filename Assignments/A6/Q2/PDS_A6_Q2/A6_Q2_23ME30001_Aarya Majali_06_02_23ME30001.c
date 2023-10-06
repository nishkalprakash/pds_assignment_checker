//23ME30001
//AARYA MAJALI

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int sum(int m[30],int n);
int main()
{
  int a[30],i;

 
  for (i=0;i<30;i++)
    {
      a[i]=(rand()%11)+20;
    }
  for (i=0;i<30;i++)
    {
      printf("a[%d]=%d,",i,a[i]);
    }

 printf("sum=%d",sum(a,29));


 return 0;
 
}
int sum(int m[],int n)
{
  
  if (n==0) return 0;
  else 
  {
    
    return m[n]+sum(m,n-1);
  }
  
}


  


  
  
