#include<stdio.h>
int digits(int i){
 if (i==0) return 0;
 return 1+digits(i/10);
}
void ispalindrome( int i )
{
  if (i < 10){
    printf("%d\n", i); return;
    }
  else{
      printf("%d", i%10);
      ispalindrome(i/10);
 }
 }
int main()
{
int x,k;
printf("Enter x");
scanf("%d",&x);
k=digits(x);
printf("The number of digits\n");
printf("%d",k);
printf("\n");
ispalindrome(x);
}

