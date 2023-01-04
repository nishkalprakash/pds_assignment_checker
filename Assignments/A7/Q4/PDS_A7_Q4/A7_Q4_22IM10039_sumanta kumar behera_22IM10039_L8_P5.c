# include<stdio.h>
int main() {
      int x;
      printf("Enter the number of numbers : ");
     scanf("%d", &x);
     int n[x];
     printf("Enter the numbers : ");
     for(int i=0; i<x; i++){
   scanf("%d", &n[i]);
  }
    for(int j=0; j<x; j++) {
  printf("%d", n[j]);
  }
  return 0;
  }
