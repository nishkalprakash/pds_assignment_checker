#include<stdio.h>
#include<math.h>
    
 int main()
 { int a,b,c,e;
   printf("Enter any three value\n");
   scanf("%d%d%d",&a,&b,&c);
   e=(pow(b,2)-(4*(a*c)));
  
   if(e>0||e==0)
   printf("Roots of the equation are real\n");
   else
    printf("Roots are imaganiry\n ");
 }