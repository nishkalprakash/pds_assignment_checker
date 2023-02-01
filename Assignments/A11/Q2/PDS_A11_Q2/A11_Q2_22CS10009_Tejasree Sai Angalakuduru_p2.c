/*
 *Sec           : 14
 *Name          : Tejasree Sai
 *Roll no       : 22CS10009
 *Assignment no : 11
 *Description   : Fibonacci num
 */

#include<stdio.h>

int fibnum(int i) 
{
  if(i<2)
   return i;
 else
 return (fibnum(i-1)+fibnum(i-2));       //computing fibonacci by recursive call
}


int main ()
{
  int n,flag=0;
  
 printf("Enter the value :\n");
 scanf("%d",&n);
 for(int i=0;fibnum(i)<=n;i++)
  {
    if(fibnum(i)==n)
     {
       flag=1;
       break;
      }
   }
 if(flag==1)
   printf("YES");
 else
   printf("NO");
 return 0;
}
     
       
