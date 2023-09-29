//Roll No.: 23MA10016
//Name: Aryan Raina

#include <stdio.h>

int main(){
  //part a
  
  int n;
  printf("Enter a number (less than 9999): ");
  scanf("%d", &n);
  if (!(0 < n && n < 9999)) {
    printf("Invalid Input!\n");
    return 0;
  }

  printf("\nInput: %d -> ", n);
  int ansA= 0;
  long long base = 1;

  /* base is coefficient of the first digit in decimal representation of n */
  while (base <= n) base *= 10;
  base /= 10;

  /* base is such that itthe loop will keep running as long as the base is not 0 */
  for (int i = n; base; base /= 10) {
    int dig = i / base;

    // if dig+1 is 10 we need to leave 2 0's otherwise 1;
    if (dig+1 == 10) ansA = ansA*10;
    ansA = 10*ansA + dig+1;

    // removing the first digit from our iterator
    i -= dig*base;
  }
  
  printf("Encoded: %d -> ", ansA);

  //--------------------------------------------------------------
  //part b
  
  int sum = 0;
  //keep adding digits to the sum variable
  for (int i = ansA; i; i/=10) sum += i%10;

  //leave 2 spaces becaues we need to add a 2 digit number which is the last 2 digits of sum
  long long ansB = 100*ansA + sum%100;

  printf("With Checksum: %lld -> ", ansB);

  //--------------------------------------------------------------
  //part c
  
  long long ansC = 0;
  base = 1;
  /* same as part a */
  while (base <= ansB) base *= 10;
  base /= 10;

  for (long long i = ansB; base; base/=10) {
    int dig = i/base;
    // we just leave keep 2 0's for all digits before adding that digit instead of 1
    ansC = 100*ansC + dig;
    i -= dig*base;
  }
  ansC *= 10; //add the last 0

  printf("Double Encoded: %lld\n", ansC);
}
