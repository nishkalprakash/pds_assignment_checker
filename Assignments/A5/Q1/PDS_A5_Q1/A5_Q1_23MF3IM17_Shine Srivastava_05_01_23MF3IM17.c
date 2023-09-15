//Name : Shine Srivastava
//Roll no. : 23MF3IM17

#include<stdio.h>
#include<stdlib.h>
int main()
{
  int a[50],n,b,count=0,c;
  printf("Enter number of terms:\n");
  scanf("%d",&n);
  for(int i=0;i<n;i++)
    {
      a[i]=rand()%90+10;
    }
   printf("Original array:\n");
  for(int i=0;i<n;i++)
    {
      printf("%d\n",a[i]);
    }
  
  for(int i=0;i<n-2;i++){
    
  if(a[i]>a[i+2])
    {
      b=a[i];
      a[i]=a[i+2];
      a[i+2]=b;
      count++;
      printf("after interchanging a[%d] = %d and a[%d] = %d\n",i,a[i],i+2,a[i+2]);
    }
  else{
    printf("after interchanging a[%d] = %d and a[%d] = %d(no change)\n",i,a[i],i+2,a[i+2]);
  }
  
  }
  printf("Number of interchanges : %d\n",count);

  return 0;
}
  
  
      
