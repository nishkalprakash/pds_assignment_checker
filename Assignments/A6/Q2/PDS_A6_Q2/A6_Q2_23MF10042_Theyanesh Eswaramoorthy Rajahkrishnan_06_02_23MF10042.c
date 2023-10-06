//Roll No:23MF10042
//Name:Theyanesh Eswaramoorthy Rajahkrishnan
#include<stdio.h>
#include<stdlib.h>
int sum1=0;
int sum(int a[],int n)
{
  if(n==1)
    return a[0];
  else
    sum1=sum1+a[n-1]+sum(a,n-1);
    }
int max1=0;
int max(int a[],int n)
{
  if(n==0)
    return max1;
  else{
    if(a[n-1]>max1)
      max1=a[n-1];
    max(a,n-2);}
}
int reverse(int a[],int in,int fi)
{
  int b;
  if (fi>in){
    b=a[in];
    a[in]=a[fi];
    a[fi]=b;
    reverse(a,in+1,fi-1);}}
    
int main()
{
  
  
  int x[30];
  for(int i=0;i<30;i++)
    x[i]=(rand()%10)+20;
  for(int i=0;i<30;i++)
    printf("x[%d]=%d, ",i,x[i]);
  printf("sum=%d\n",sum(x,30));
  printf("maximum=%d\n",max(x,30));
  printf("Reversed Array\n");
  reverse(x,0,29);
  for(int i=0;i<30;i++)
    printf("x[%d]=%d, ",i,x[i]);
}


  
      
    
