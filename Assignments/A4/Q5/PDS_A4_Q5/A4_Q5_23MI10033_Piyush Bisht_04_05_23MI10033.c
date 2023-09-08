//Roll No.:23MI10033
//Name:Piyush Bisht

#include<stdio.h>

int main()
{
  int a, g1=0, g2=0, b, sum=0;
  printf("Enter a number\n");
  scanf("%d",&a);
  while (a!=0){
    b=a%10;
    sum+=b;
    if (b>g1){
      g2=g1;
      g1=b;
    }
    else if ((b>g2)&&(b<g1)){
      g2=b;
    }
    a=a/10;
  }
  printf("Sum of digits =  %d",sum);
  printf("Largest = %d    Second largest = %d", g1, g2);
  return 0;
}
      
