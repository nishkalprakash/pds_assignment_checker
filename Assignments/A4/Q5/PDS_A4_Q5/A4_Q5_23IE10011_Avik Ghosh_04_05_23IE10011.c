//Roll No.:23IE10011
//Name: Avik Ghosh
#include <stdio.h>

int main( ) {
  int n,sum=0,max1=0,max2=0;
  //max1 variable stores largest digit and max2 varible stores second largest digit
    printf("Enter a number");
  scanf("%d",&n);
  while(n > 0) {
    sum = sum + (n % 10);
    if(max1 < (n%10))
      max1 = n%10;
    if((max1 > (n%10)) &&  ((n%10) > max2))
      max2 = n%10 ;
    n=n/10;
  }
  printf("Sum of digits=%d\n",sum);
  printf("Largest =%d\t Second Largest=%d\n",max1,max2);
  return 0;
}
