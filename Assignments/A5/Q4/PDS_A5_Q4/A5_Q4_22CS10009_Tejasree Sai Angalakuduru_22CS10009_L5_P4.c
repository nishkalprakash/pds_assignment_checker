/*
 *Sec           : 14
 *Name          : Tejasree Sai
 *Roll no       : 22CS10009
 *Assignment no : 5
 *Description   : Finding coprimes
 */

#include<stdio.h>
int main ()
{
 int n,i;
 
 printf("Enter the no of inputs:\n");
 scanf("%d",&n);
 int a[n];
 for(i=0;i<n;i++)
  { 
    printf("Enter the inputs:\n");
    scanf("%d",&a[i]);
  }
 for(i=0;i<n;i++)
  { 
    
    printf("%d",a[i]);
  }
return 0;
}
