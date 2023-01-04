# include<stdio.h>
int main() {
    int a, b=0;
    printf("Enter the number of numbers : ");
    scanf("%d", &a);
    int n[a];
    printf("Enter the numbers : ");
   for(int i=0; i<a; i++) {
    scanf("%d", &n[i]);
  } for(int i=0; i<a; i++) {
    for(int j=0; j<i; j++) {
      if(n[i]<n[j]) {
       b = b + 1;
       break;
  }  
        for(int k=i+1; k<a; k++) {
        if(n[i] > n[k]) {
        b = b + 1;
        break;

  }
  }
  }
  } printf("Out of order : %d\n", b);
    return 0;
  }

