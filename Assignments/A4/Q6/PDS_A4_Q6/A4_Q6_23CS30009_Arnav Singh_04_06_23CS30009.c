//Role No.: 23CS30009
//Name: Arnav Singh

#include <stdio.h>
#include <stdlib.h>

int main(){
  int sum=0, a=0,b,min=32,mnum; //The maximum sum of digits can be 5+9+9+9=32
  //mnum is the number with least sum
  for (int i=1; i<=20; i++){
    sum=0;
    a=rand()%1001 + 5000;
    b=a;  //Copy of a
    printf("Random number %d: %d \n", i, a);
    while (a!=0){  //Loop to find sum of digits of a
      sum+=a%10;
      a/=10;
    }
    if (sum<min){
      min=sum;
      mnum=b;
    }
    printf("Sum of digits of random number %d: %d \n", i, sum);
  }
  printf("The number having smallest sum of digits: %d\n", mnum);
  return 0;
}

