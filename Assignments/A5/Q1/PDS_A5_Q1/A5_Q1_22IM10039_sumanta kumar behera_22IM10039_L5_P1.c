# include<stdio.h>


   int power(int x, int n);
   int fact(int n);       //calculating sum of series

   int main () {

       int x, n;
       printf("Enter x and n : ");
       scanf("%d %d", &x, &n);
       int A = power(x, n);
       int B = fact(n);
       float Ans = A/B;
       printf("Answer is : %f", Ans);
             return 0;

     }       int power(int a, int b) {
             int prod = x;
             for(int i=1; i<=n; i++) {
             prod = prod * x;
     }       return prod;
     }     

             int fact(n) {
             int fact = 1;
             for( int j=1; j<=n; j++) {
             fact = fact * j;
     }       return fact;
     }

                
  

