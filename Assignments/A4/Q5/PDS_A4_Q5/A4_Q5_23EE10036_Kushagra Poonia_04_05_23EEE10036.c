//Roll no: 23EE10036
//Name: Kushagra Poonia

#include <stdio.h>

int main(){
  int c = 0;
  int n=0;
  int max = 0; int sec_max = 0;
  char x = '0';
  int sum = 0;

  while(x != '\n'){
    n++;
    scanf("%c", &x);
    int c = x - '0';
    if(c>max){
      sec_max = max;
      max = c;
    }
    if(c<max && sec_max<c){
      sec_max = c;
    }
    sum += c;
  }
  if(n==1){
    sec_max=0;
  }
  printf("Sum of digits = %d\nLargest = %d Second Largest = %d\n", sum+38, max, sec_max);
}
