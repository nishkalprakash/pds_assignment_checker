//Roll No.-23CH30007
//Name-Asad Ali Jaffrey

#include<stdio.h>

int main() {
  int n,digit,sum=0,largest=0,largest_2=0;

  printf("Enter a number\n");
  scanf("%d",&n);

  while (n>0) {
    digit=(n%10);
    sum=sum+digit;
    n=n/10;

    if (digit>largest) {
      largest_2=largest;
      largest=digit;
    }
    else {
      if (digit>largest_2) {
	largest_2=digit;
      }
    }
  }
  printf("Sum of digits=%d\n",sum);
  printf("Largest=%d Second Largest=%d\n",largest,largest_2);
  return 0;
}
      
    
    
    
  
