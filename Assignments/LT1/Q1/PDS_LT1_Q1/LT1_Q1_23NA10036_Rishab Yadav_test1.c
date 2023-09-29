// Rishab Yadav
// Roll number - 23NA10036
// Set - 1

#include <stdio.h>
#include <math.h>

int main(){

  int n;
  int k = 3;
  int rem;
  int num = 0;
  int div;
  int j = 0;
  int s;
  int checksum = 0;

  printf("Enter a positive integer value less than 9999:\n");
  scanf("%d", &n);

  //------------parta----------------------------------

  if(n >= 9999 || n <= 0){
    printf("Please enter value less than 9999 and greater than 0.\n");
    return 0;
  }
  
  if(n >= 1 && n < 10){
    rem = n + 1;
  }

  if(n >= 10 && n < 100){
    div = 10;
    while(n > 0){
      rem = n / div;
      rem = rem + 1;
      num = num * 10 + rem;;
      n = n % div;
      div = div / 10;
    }
  }
  if(n >= 100 && n < 1000){
    div = 10*10;
    while(n > 0){
      rem = n / div;
      rem = rem + 1;
      num = num * 10 + rem;;
      n = n % div;
      div = div / 10;
    }
  }
  if(n >= 1000 && n < 9999){
    div = 10*10*10;
    while(n > 0){
      rem = n / div;
      rem = rem + 1;
      num = num * 10 + rem;;
      n = n % div;
      div = div / 10;
    }
  }

  printf("The output of part a is: %d\n", num);

  //--------------------partb----------------------------

  int copyNum = num;

  while(copyNum > 0){
    int h = copyNum % 10;
    checksum = checksum + h;
    copyNum = copyNum / 10;
  }

  int outB = num*100 + checksum;

  printf("The output for part b is: %d\n", outB);

  //----------------partc------------------------------------

  

  return 0;
}
