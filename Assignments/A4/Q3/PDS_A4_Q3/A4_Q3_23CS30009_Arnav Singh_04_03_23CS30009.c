//Role No.: 23CS30009
//Name: Arnav Singh

#include <stdio.h>

int main(){
  int n,m=0,k;
  printf("Enter the number: ");
  scanf("%d", &n);
  k=n;
  while (k!=0){
    m=(m*10)+(k%10);
    k=k/10;
  }
  n==m? printf("%d is a palindrome.\n",n):printf("%d is not a palindrome.\n",n);
  return 0;
}

