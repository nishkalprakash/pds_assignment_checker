#include<stdio.h>
#include<stdlib.h>

int gcd(int m,int n);

int main()
{
  int n,arr[n],p;
  printf("Enter the size of array:-" );
 scanf("%d",&n);

for(int i=0;i<n;i++)
{
 // printf(" Enter arr[] of index %d :-\n",i);
 scanf("%d",&arr[i]);

if(arr[i]<0)
{
  printf("Invalid enteries : all should be positive number");
break;
}

}
 for(int i=0;i<n;i++)
{
 
   p=arr[i];
  if(p<arr[i])
{
  printf("All input must be an integer");
 exit(0);
}
}
   for(int i=0;i<n;i++)
{
 
  for(int j=0;j<n;j++)
{
  if(gcd(arr[i],arr[j])==1)
{ 
  printf("(%d,%d)",arr[i],arr[j]);
}
}
}
return 0;
}

int gcd(int n,int m)
{
  if(n>m)
{
int temp;
 temp=n;
 n=m;
m=temp;
}

 while(m%n!=0)
{
 int q,p;
 q=n;
n=m%n;
m=p;
}
  return n;
}



