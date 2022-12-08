# include<stdio.h>
# include<math.h>
  int main() {
      int a,b;
      printf("Enter numbers : ");
      scanf("%d %d", &a, &b);
      int s = 0;
      int i = 1;
      for( int i=1; i<=a && i<=b; i++) {
       if( a % i == 0 && b % i == 0) {
            s = s + i;
       }scanf("%d", &s);
          if(s == 1) {
           printf("a and b are co-prime");
       } else {
         printf("a and b are not co-prime");
       } 
       }
      return 0;
       }  
          