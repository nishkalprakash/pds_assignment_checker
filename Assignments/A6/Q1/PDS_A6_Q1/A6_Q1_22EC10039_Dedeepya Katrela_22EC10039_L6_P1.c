//SEC:14
//ROLL NUMBER:22EC10039
//NAME:DEDEEPYA
//ASSIGNMENT:6
//DESCRIPTION:PROGRAM TO CHECK POINTS
#include <stdio.h>
int print_term(int n)
{if(n<=2)
  return n;
 else
  return (3*print_term(n-1)*print_term(n-2)-2*print_term(n-2)*print_term(n-3)+1);
}

int main()
{ 
  int k,i,term;
  printf("enter the value of number of terms:");
  scanf("%d",&k);
  if(k<0)
  printf("invalid input");
  for(i=0;i<k;i++)
  {term=print_term(i);
   printf("%d ",term);}
 printf("\n");
return 0;
}
