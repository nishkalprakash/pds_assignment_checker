#include <stdio.h>

int main()
{
  int number;
  printf("Enter an integer: ");
  scanf("%d",&number);

  int digit;
  int max=0;
  int max2=0;
  int sum=0;
  int num;
  num=number/10;
  digit=number%10;

  for(int i=1;i<=99;i++){
    if(digit>max)
      max=digit;
    sum=sum+digit;
    digit=num%10;
    num=num/10;
  }
  num=number/10;
  digit=number%10;
  for(int j=1;j<=99;j++){
    
    if(digit>max2 && digit!=(max))
      max2=digit;
    digit=num%10;
    num=num/10;
  }
  printf("MAX DIGIT: %d\n",max);
  printf("2ND MAX DIGIT: %d\n",max2);
  printf("SUM: %d\n",sum);
  
  return 0;
}
