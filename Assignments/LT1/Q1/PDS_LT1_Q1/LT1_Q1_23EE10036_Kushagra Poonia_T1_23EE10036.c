//Name: Kushagra Poonia
//Roll: 23EE10036

#include <stdio.h>

int main(){
  int n = 0;

  printf("Enter the number to be encoded.\n");
  scanf("%d", &n);

  int mod = n;
  int digit = 0;
  long int single_encode = 0;
  int sum = 0;
  long int check_sum = 0;
  long int double_encoded = 0;
  int count = 0;

  for(long int i = 1; i < n; i *= 10){//Digit wise seperating the number
    digit = mod%10;
    if(digit != 9){//All other than 9 have the digits as n+1, 9 has 1 and 0
      sum += digit+1;
    }
    else{//1+0 = 1
      sum += 1;
    }
    mod /= 10;
    single_encode += (digit+1)*i;
    count++;
  }

  check_sum = single_encode*100 + sum%100;//

  long int mod2 = check_sum; //mod2 is going to be modified hence check_sum can't be used
  long int num = 1;
  
  for(int i = 1; i < (count+2)*2; i++, num*=100){//Digit wise seperating the check sum
    digit = mod2%10;
    mod2 /= 10;
    double_encoded += digit*num*10;
  }
  
  printf("Encoded Number = %ld\n", single_encode);//Encoded number
  printf("With check sum = %ld\n", check_sum);//Encoded number with check sum
  printf("Double Encoded = %ld\n", double_encoded);
}
