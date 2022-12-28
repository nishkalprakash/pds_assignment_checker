#include<stdio.h>
#include<stdlib.h>
int gcd(int a,int b)
{
 if(a>b)
 { 
  int temp;
  temp=a;
  a=b;
  b=temp;
 }
 while(b%a!=0)
 {
  int p;
  p=a;
  a=b%a;
  b=p;
 }
 return a;
}
int main()
{
 int n;
 printf("Enter the size of the array:\n");
 scanf("%d",&n);

 float arr[n];
 for(int i=0;i<n;i++)
  {
    scanf("%f",&arr[i]);
  }
 for(int i=0;i<n;i++)
  {
   int n=arr[i];
   if(n<arr[i])
    {
      printf("All entries should be integer numbers\n");
      exit(0);
    }
   if(arr[i]<0)
   {
      printf("All should be positive numbers\n");
      exit(0);
   }
  }
 for(int i=0;i<n;i++)
  {
    for(int j=i;j<n;j++)
     {
       if(gcd(arr[i],arr[j])==1)
        printf("(%f,%f) ",arr[i],arr[j]);
     }
  }
return 0;
} 

