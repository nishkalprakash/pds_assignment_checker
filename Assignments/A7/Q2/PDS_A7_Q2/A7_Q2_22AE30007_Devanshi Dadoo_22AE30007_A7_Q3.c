
#include<stdio.h>

int main()
{

int n,m,c=1,k=0,b[100];
 printf("enter number of digits "); // ASKING USER FOR NUMBER OF ELEMENTS 
 scanf("%d", &n);
int a[n];
 for(int i=0; i<n; i++) // SAVING ELEMENTS ENTERED IN ARRAY 
 {
  scanf("%d", &a[i]);
 }
printf("enter m ");
scanf("%d", &m);
for(int i=0; i<n; i++)
{
 for(int j=i+1; j<n;j++)
 {
  if(a[i]==a[j])
  {
  c++;
  }
 }
 if(c==m)
 {
 b[k]=a[i];
 k++;
 }
}
 if(k>0)
 {
  for(int i=0; i<k; i++)
  {
  printf("%d ", b[i]);
  }
  printf("appears %d number of times", m);
 }
 else 
 printf("does not repeat ");
}
