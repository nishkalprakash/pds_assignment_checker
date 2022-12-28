# include<stdio.h>
// playing with another series
int print_term(int n) {
    if(n>=0 && n<=2) {
      return n;
  } else {
   return (3 * print_term(n-1) * print_term(n-2)) - (2 * print_term(n-2) * print_term(n-3)) + 1;
  }
  }
// function to pring the series
int main(){
   int k;
   printf("Enter the value of k : "); // input has been taken
   scanf("%d", &k);
   if(k<0) {
      printf("Invalid Input"); //verifying the inputs
    }
   else {
   for(int i=0; i<k; i++){
   printf("%d", print_term(i)); // series has been printed out
   printf(" ");
}
}  return 0;
}
