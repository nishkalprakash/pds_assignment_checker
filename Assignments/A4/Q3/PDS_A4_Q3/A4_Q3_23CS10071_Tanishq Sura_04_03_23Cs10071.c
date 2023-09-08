//tanishq sura
//23CS10071

#include<stdio.h>

int main(){
  int n,i,j,rev=0,l;
  printf("enter the no. :\n");
  scanf("%d",&n);
  l=n;
  for(i=0;n!=0;i++){
    j=n%10;
    rev=rev*10+j;
    n=n/10;
  }
  if(l==rev)
    printf("it is a palindrome");
  else
    printf("it is not a palindrome");

  return 0;
}
    
