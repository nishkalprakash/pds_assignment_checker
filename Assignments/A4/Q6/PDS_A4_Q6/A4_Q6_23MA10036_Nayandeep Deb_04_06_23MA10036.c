//Roll no. 23MA10036
//Name: Nayandeep Deb

#include <stdio.h>
#include <stdlib.h>

int main(){
  int i, j, sum1=0, sum2=0, sn1=0, sn2=0;
  i = (rand() % 1001) +5000;
  printf("%d\n", i);
  sn1 = i;
  while(i > 0) {
    sum1 += i % 10;
    i /= 10;
  }
  for(int k = 0; k < 19; k++){
    j = (rand() % 1001) +5000;
  printf("%d\n", j);
  sn2 = j;
  sum2 = 0;
  while(j > 0) {
    sum2 += j % 10;
    j /= 10;
  }
  if (sum2 < sum1){
    sum1 = sum2;
    sn1 = sn2;
  }
  }
  printf("\n Number with smallest sum of digits: %d\n", sn1);
  return 0;
}
