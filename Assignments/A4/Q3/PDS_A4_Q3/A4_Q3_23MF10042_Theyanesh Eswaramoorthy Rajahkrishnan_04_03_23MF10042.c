#include<stdio.h>
int main()
{
  int n,m=0,j;
  printf("Enter the number\n");
  scanf("%d",&n);
  j=n;
  while((n*10)/10!=0){
    m=m*10+(n%10);
    n/=10;
  }
  if(m==j)
    printf("The number %d is a palindrome\n",j);
  else
    printf("The number %d is not a palindrome",j);
  return 0;
}
