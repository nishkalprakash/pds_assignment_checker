/*
  Section 14
  Roll no : 22AG30008
  Name : Bhavesh Nitin Bhadane 
  Assignment no -5
  Program to check points
*/


#include<stdio.h>
#include<math.h>

int  power(int x,int n)
{
 int i,j=1;

 for(i=1;i<=n;i++){
    j*=i;
  }
  return(j);
}

int fact(int n)
{
  int m,fact=1;
  for(m=1;m<=n;m++){
    fact = fact * m;
  }
  return (fact);
}

int main()
{
  int x,n;
  printf("enter the value of variable:\n");
  scanf("%d",&x);
  printf("Enter the index :\n");
  scanf("%d",&n);

  int i;
  float sum = 1;
  for(i=0;i<=n;i++){
   sum= sum + (power(x,i))/(float)fact (i);
  }
  printf("The sum is %f\n",sum);
  return 0;
}

  
 

