//ROLL 23EX10024
//NAME NISHANT KUMAR
#include<stdio.h>
#include<math.h>
int main()
{
  int i, num,num1,sum=0,max=0,secmax=0,x;
  printf("ENTER A POSITIVE INTGER\n");
  scanf("%d",&num1);
  num=num1;
  for(i=0;num1>0;i++){
    sum = sum + (num1%10);
    num1=num1/10;
  }
  printf("The sum of digits is %d", sum);
  while(num!=0){
    x=num%10;
  if(x>max){
  secmax = max;
  max = x;
}
  else if(x<max && x>secmax){
   secmax = x;;
 }
 else {
   num = num/10;
 }
  }
printf("The largest and second largest integer is %d and %d", max,secmax);
return 0;
}
    
    
