#include<stdio.h>
int fib(int n)
{
 if(n==0)
   return 0;
 else if(n==1)
   return 1;
 else 
   return fib(n-1)+fib(n-2);


}
  int main()
{
int c,a;
 printf("Enter the no. to check ");
  scanf("%d",&a);
 int d=0,e=0;
  for(int i=0;i<100;i++)
  {  
      c=fib(i);
   if(a!=c)
     e++;
    else if(a==c)
   {     d=d+1;
          if(d=1)
           break;
    }  
      
      
 
    }

 if(d=1)
   printf("YES");
 else 
   printf("NO");


   return 0;
}
