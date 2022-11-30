#include<stdio.h>
#include<math.h>



int main()
{
  int j=1,p ;
  printf("Enter any number:");
  scanf("%d",&p);
  for(j=1;j<=p;++j)


{ 
  if(p%j==0)
  printf("%d ",j); //prints factors of given number.
}
  return 0 ;
}
