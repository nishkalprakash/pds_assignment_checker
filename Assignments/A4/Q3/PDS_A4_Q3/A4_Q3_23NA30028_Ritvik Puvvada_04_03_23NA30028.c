//Roll No: 23NA30028//
//Name: Ritvik Puvvada//

#include<stdio.h>
int main()
{
  int i,j,n,rev=0;
  printf("Input a number");
  scanf("%d",&n);
  j=n;
  while(n>0){
    i=n%10;
    n=n/10;
    rev=rev*10+i;
  }
  if(j==rev)printf("It is a palindrome\n");
  else printf("It is not a palindrome\n");

  return 0;
}
    
    
  
