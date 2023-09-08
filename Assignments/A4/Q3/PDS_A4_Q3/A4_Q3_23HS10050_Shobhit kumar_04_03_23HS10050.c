//Roll no:23HS10050
//Name:Shobhit kumar

#include<stdio.h>

int main(){
  int x,y=0,l;
  printf("Enter the number:\n");
  scanf("%d", &x);
  l=x;
  
  while (x!=0){
    y=y*10;
    y=y+y%10;
    x=x/10;
  }
  if(l==y){
   
    printf("The number is palindrome");
  }
  else {
    printf("The number is not palindrome");
  }

  return 0;

}
    
  
