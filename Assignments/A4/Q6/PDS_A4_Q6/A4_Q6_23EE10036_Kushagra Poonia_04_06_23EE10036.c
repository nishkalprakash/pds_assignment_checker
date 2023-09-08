//Roll no: 23EE10036
//Name: Kushagra Poonia

#include <stdio.h>
#include <stdlib.h>

int main(){
  int sum = 0;
  int digit = 0;
  int num = 0;
  int num_use = 0;
  int pwr_ten = 0;
  int min = 0; int min_sum = 40;

  for(int i = 0; i < 20; i++){
    num = ((rand()%1000)+5000);
    num_use = num;
    pwr_ten = 1;
    sum = 0;
    
    for(int j =0; j<4; j++){
      pwr_ten *=10;
      digit = (num_use%pwr_ten);
      num_use -= digit;
      digit /= (pwr_ten/10);
      sum += digit;
    }
    if(sum < min_sum){
      min_sum = sum;
      min = num;
    }
    printf("The sum of the digits of %d is %d\n", num, sum);
    
  }
  printf("The number with the smallest sum of digits is %d and the sum is %d\n", min, min_sum);
}
