# include<stdio.h>
# include<math.h>
  int main() {
      int a,b;
      printf("Enter two numbers : ");
      scanf("%d %d", &a, &b);
      int s = 0;
      int i = 1;
      for( int i=1; i<=a && i<=b; i++) {
          if(a % i ==0 && b%i==0) {
             s = s+ i;
        }
        }
          if(s == 1) {
           printf("They are co-prime");
       } else {
         printf("They are not co-prime");
       }  
       
      return 0;
       }   
           







     
