#include<stdio.h>
#include<math.h>

  int main()
  {
   int i;
   printf("enter any number");
   scanf("%d",&i);
   int c,r;
   c=1,r=1;
   while(c<=i && r<=i)
   { if (c%2==0 && r%2==1)
    {
    printf("1 ");
    }
    else if(c%2==1 && r%2==1)
    {
    printf("1 ");
    }
    if(r%2==0 && c%2==0)
    {
    printf("0 ");
    }
    else if(r%2==0 && c%2==1)
    {
    printf("0 ");
    }
    c++ && r++;
  }
   return 0;
   
   }
