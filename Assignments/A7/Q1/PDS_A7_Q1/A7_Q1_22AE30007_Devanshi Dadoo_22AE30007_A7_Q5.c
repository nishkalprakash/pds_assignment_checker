/*
section 14
roll no.: 22AE30007
name: Devanshi Dadoo
Assigment 7
desciption: to insert a value 
*/


#include<stdio.h>

int main()
{
 int n,m,i,j;
  printf("enter the array length");
  scanf("%d", &n);
  printf("enter the value of m");
  scanf("%d", &m);
  int a[n];
  int b[n+1];
  printf("a[n]= ");
  for(int i=0; i<n; i++)
    {
      scanf("%d",&a[i]);
    }
 for(int i=0; i<n-1;i++)
  {
   if(m>a[i] && m<a[i+1])
  {
  b[i+1]=m;
  break;
  }
}

if(m>a[n-1])
 {
  b[n]=m;
  for(int i=0; i<n;i++)
 {
  b[i]=a[i];
 }
 for(int i=0;i<n+1; i++)
 {
 printf("%d", b[i]);
 }
}
else
{
 for(int j=0; j<=i; j++)
 {
  b[j]=a[j];
}
for(int j=i+2;j<n+1; j++)
 {
  b[j]=a[j-1];
 }
 for(int i=0; i<n+1;i++)
 {
 printf("%d", b[i]);
}
}
}

