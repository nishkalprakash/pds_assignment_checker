//Role No.: 23CS30009
//Name: Arnav Singh

#include <stdio.h>

int main(){
  int n,max=0,max2=0,sum=0,a;
  printf("Enter number: ");
  scanf("%d", &n);
  if (n/10==0){  //if n is a single digit number
    max=n;
    max2=0;
    sum=n;
  }
  else{
    while (n!=0){
      a=n%10;
      n/=10;
      if (a>max){
	max2=max;
	max=a;
      }
      else if (a<max && a>max2){
        max2=a;
      }
      sum+=a;
    }
  }
  printf("Sum of digits=%d \nLargest = %d  Second Largest =%d\n", sum,max,max2);
  return 0;
}

