#include<stdio.h>
#include<math.h>

int main()
 {
   int i,f;
   printf("enter any integer:");
   scanf("%d",&i);
    int sum=0;
  while(i>0)
  { int r=i%10;
     sum=sum+r;
     i=i/10;
    }
    printf("%d",sum); 
  
   return 0;
   
 }
