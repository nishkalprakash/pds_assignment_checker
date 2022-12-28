/*NAME:AJMEERA UDAY KIARN
  SECTION:14
  LAB:6
*/

#include<stdio.h>

int print_term(int n)
{
 if(n==0) return 0;
 if(n==1) return 1;
 if(n==2) return 2;

  int ans=3*print_term(n-1)*print_term(n-2)*print_term(n-3)+1;
  return 0;
}
 int main()
{int k;
 printf("enter number of term:");
 scanf("%d",&k);
  
 if(k<0)
 printf("invalid input");

 else
      for(int i=0;i<k; i++)
              printf("%d",print_term(i));
      
return 0;
}

