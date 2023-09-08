//Roll NO.-23CH30007
//Name- Asad Ali Jaffrey

#include<stdio.h>
#include<stdlib.h>

int main() {
  int n, sum, digit, min_sum = 50, min,original;

  for (int i=1;i<=20;i++) {
    n=rand()%1001+5000;
    printf("%d",n);
    original=n;
    sum=0;

    while (n>0) {
      digit=(n%10);
      sum=sum+digit;
      n=n/10;
    }
    printf("  Sum=%d\n",sum);

    if (sum<min_sum) {
      min_sum = sum;
      min = original;
    }
  }
  printf("The number having minimum sum is %d and its sum is %d\n",original,min_sum);
}
  
    
      
    
