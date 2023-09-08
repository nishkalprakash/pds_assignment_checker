//Roll no: 23EE10036
//Name: Kushagra Poonia

#include <stdio.h>

int main(){
  int num = 0;
  int num_check = 0;
  int rev_num = 0;
  int pwr_ten = 1;
  int count = 0;
  int digit = 0;

  printf("Enter a number:\n");
  scanf("%d", &num);

  num_check = num;

  for(count = 0; (num%pwr_ten) != num; count++){
    pwr_ten *= 10;
  }

  int pwr_10 = 1;

  for(int i = 1; i<=count; i++){
    pwr_10 *=10;
    pwr_ten /= 10;
    digit = (num%pwr_10);
    digit /= (pwr_10/10);
    num -= digit;
    rev_num += (digit*pwr_ten);
  }

  if(rev_num == num_check){
    printf("The number is a palindrome\n");
  }
  else{
    printf("The number is not a palindrome\n");
  }
}
