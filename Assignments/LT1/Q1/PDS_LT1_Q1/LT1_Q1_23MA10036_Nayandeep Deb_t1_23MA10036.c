//Roll no. 23MA10036
//Name: Nayandeep Deb

#include <stdio.h>

int main () {
  int num, encd, rm, mt;
  printf("Give a number: ");
  scanf("%d", &num);
  if (num >= 9999 || num <= 0) { //error case: Invalid input
    printf("Invalid Input");
    return 1;
  }
  mt = 1, encd = 0; //initializing multiplier and encoded num variables
  while (num > 0) {
    int n = num % 10;
    n++;
    if (n == 10) { //case for if number is 10
      n *= mt;
      mt *= 100;
    }
    else {
      n *= mt;
      mt *= 10;
    }
    encd += n; //adding encoded digit to main number
    num /= 10;
  }
  printf("Encoded: %d\n", encd);

  //PART b...............................................

  int cksm = encd, sum = 0;
  while (encd > 0) { //adding all digits in encoded number
    int n = encd % 10;
    sum += n;
    encd /= 10;
  }
  sum = sum % 100; //taking only 2 digits
  cksm = (cksm * 100) + sum;
  printf("with Checksum: %d\n", cksm);

  //PART c................................................

  int dv = 1, k;
  while (dv < cksm) dv *= 10; //taking multiple of 10 just less than cksm
  dv /= 10;
  while (cksm > 0) { //taking greatest digits from cksm, then multiplying by 10 and printing
  k = cksm / dv;
  k *= 10;
  if (k != 0) printf("%d", k);
  else printf("00"); //case for 0
  cksm = cksm % dv; //removing first digit from cksm
  dv /= 10;
  }
  printf("\n");
  return 0;
}
