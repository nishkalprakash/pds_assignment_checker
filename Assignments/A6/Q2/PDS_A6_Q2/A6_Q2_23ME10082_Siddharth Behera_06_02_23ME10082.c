//23ME10082
//Siddharth Behera
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define n 29
int sum(int x,int arr[]);
int max(int x,int arr[]);
int reverse(int y,int x,int arr[]);

int main()
{
  int a[30],i,sum1,max2,z=0,rev;
  srand(time(NULL));
  for(i=0;i<30;i++)
    {
      a[i]=(rand()%(30-20+1)+20);
      printf("%d ",a[i]);
    }
 sum1=sum(n,a);
 printf("\nsum=%d",sum1);
 
 reverse(z,n,a);
 printf("\nreverse\n");
  for(i=0;i<30;i++)
 printf("%d ",a[i]);
}
int sum(int x,int arr[])
{
  if(x==0)
    {
      return arr[0];
    }
  else return arr[x]+sum(--x,arr);			 		  	 }

int reverse(int y,int x,int arr[])
{
  int temp,fp=y,lp=x;
  if(y>x){
    return 0;}
  temp=arr[x];
  arr[x]=arr[y];
  arr[y]=temp;
  reverse (x+1,y-1,arr);
}
    

      

