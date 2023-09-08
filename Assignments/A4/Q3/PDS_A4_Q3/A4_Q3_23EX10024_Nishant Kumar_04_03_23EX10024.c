//ROLL 23EX10024
//NAME NISHANT KUMAR
#include<stdio.h>
#include<math.h>
int main()
{
  int i, num1,num2=0;
  int num3;
  num3==num1;
  printf("ENTER A NUMBER\n");
  scanf("%d",&num1);
  for(i=0;num1>0;i++){
    num2 = num2 + pow(10,i)*(num1%10);
    num1 = num1/10;
  }
  if(num3==num2){
    printf("ENTERED NUMBER IS A PALINDROME");
  }
  else {
    printf("ENTERED NUMBER IS NOT A PALINDROME");
  }
  return 0;
}
