// aashrith vellampalli
// 24NA10007
#include <stdio.h>
int main()
 {
 int n,i=1,term,term1=1,term2=-1,temp; //declaring variables
  printf("enter a natural number");
  scanf("%d",&n); //input from user
  if(n<=0)
  {
    printf("N is invalid");
  }
  else if(n>2)
    printf("1,-1,");
    while(i<=n-2)
     {
      term= term1-term2; //writing next term using first 2 terms
      printf("%d,",term);
      term1=term2;// changing values of variable for getting next term
      term2=term;
      i=i+1;	
     }
  if(n==1)
   printf("1");// if n is 1
  if(n==2)
   {
    printf("1,-1");  // if n is 2
   }
   printf("\n");
 return(0);
 }
