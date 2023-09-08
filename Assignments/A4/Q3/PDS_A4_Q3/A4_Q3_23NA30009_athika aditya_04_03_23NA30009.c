//roll no 23NA30009
//ATHIKA

#include <stdio.h>
int main(){
  int n,reverse=0,copyn;
  copyn=n;

  printf("enter the number:\n");
  scanf("%d",&n);

  while(copyn >0){
    int i;
    i=n%10;
    reverse=reverse *10+ i;
    n=n%10;
    return reverse;
  }

  printf("reverse-%d\n",reverse);

  if (reverse ==copyn){
  printf("number is a palindrome:\n");
  }
  else{
   printf("number is not a palindrome:\n");
  }

   return 0;

 }
    
