//Name:Siddharth Behera
//Roll no:23ME10082
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
  int a[50],n,i,temp,count=0;
  srand(time(NULL));
  printf("enter the number of random integer you want=");//enter the number of enteries you want
  scanf("%d",&n);
  for(i=0;i<n;i++)//assigning n random integer in the range  
      {
	a[i]=(rand()%91)+10;
      }
  for(i=0;i<n;i++)//printing the n random integer in the range
    {
     printf("%d ",a[i]);
    }
  printf("\n");
  for(i=0;i<n-2;i=i+2)//swapping even integers
    {
    temp=a[i];
    a[i]=a[i+2];
    a[i+2]=temp;
    count++;//counting number of integer
    }
  for(i=0;i<n;i++)//printing the new swapped array
    {
    printf("%d ",a[i]);
    }
  printf("\nnumber of interchange=%d",count);//printing number interchange
    return 0;
  
  
}
  
