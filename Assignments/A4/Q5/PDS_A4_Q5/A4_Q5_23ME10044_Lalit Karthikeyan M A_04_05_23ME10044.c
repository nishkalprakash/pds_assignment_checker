//Roll NO.: 23ME10044
//Name: Lalit Karthikeyan M A

#include<stdio.h>

int main(){

  int x, fl, sl=0, s, dig;

  printf("Enter an integer: \n");
  scanf("%d", &x);
  
  fl=x%10;
  s=x%10;
  x=x/10;
  
  while(x>0){

    dig=(x%10);
    s+=dig;
    if(dig>fl){
      
      sl=fl;
      fl=dig;
      
    }
    
    if(dig<fl && dig>sl) sl=dig;
    x=x/10;
    
  }

  printf("Sum of the digits is %d \n", s);

  printf("The largest digit is %d \n", fl);

  printf("The second largest digit is %d \n", sl);

  return 0;
}
  

    
    
    
