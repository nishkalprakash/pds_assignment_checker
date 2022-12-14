# include<stdio.h>
# include<math.h>
//printing a beautiful pattern

int main() 
{
   int n;
   printf("Enter a number between 2 and 10 : "); // enter the number between 2 and 10, upto which you want to get the pattern
   scanf("%d", &n);     // number scanned
  if(n>= 2 && n <= 10) {
   int i, j;     //processing pattern for you
   for(i=1; i<=n; i++) {
     for(j=1; j<=i; j++) {
     
   printf("%d", i);
   } printf("\n");  // your pattern got printed
   }
   }
   else {
    printf("Out of range\n");
   } return 0; 
   }
