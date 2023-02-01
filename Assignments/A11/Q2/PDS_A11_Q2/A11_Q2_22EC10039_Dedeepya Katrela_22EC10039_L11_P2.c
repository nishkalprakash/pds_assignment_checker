//SEC:14
//ROLL NUMBER:22EC10039
//NAME:DEDEEPYA
//ASSIGNMENT:11
//DESCRIPTION:PROGRAM TO CHECK POINTS
#include <stdio.h>
#include <stdlib.h>
int check(int n)
{  int i=0;
    while(1)
     {if(n==fib(i))
        return 1;
      if(n>fib(i))
        i++;
      if(n<fib(i))
        return 0;
     }
}
int fib(int n)
{ if(n<2)
   return(n);
  else
   return(fib(n-1)+fib(n-2));
}
int main()
{ int num,flag;
  printf("enter any number:");
  scanf("%d",&num);
  flag=check(num);
 if(flag==0)
  printf("no\n");
 if(flag==1)
  printf("yes\n");
return 0;
}
