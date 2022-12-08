# include<stdio.h>
# include<math.h>
# include<stdlib.h>
# include<time.h>
 int main () {
      int r = 50;
      int i=1;
      int n;
      for( int i=1; i<=5; i++) {
         printf("Enter n : \n");
         scanf("%d", &n);
         if(n>r) {
          printf("Too Big\n");
        } else if(n<r) {
          printf("Too Small\n");
        } else {
           printf("Winner\n");
           break;
        }
        } return 0;
        }
