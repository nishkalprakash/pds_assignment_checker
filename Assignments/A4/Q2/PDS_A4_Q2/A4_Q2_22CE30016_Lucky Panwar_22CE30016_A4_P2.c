//   Name - Lucky Panwar
//   Roll no. - 22CE30016
//   Assignement no. - 4

#include<stdio.h>

int main()
{
  int n;      
  int sum=0;
  int digit;
  int quotient;
  printf("Enter the integer n\n");
  scanf("%d", &n);
  if(n<-999999 && n>999999){   
    printf("Invalide input");
    }
  if(n==0){
    printf("The sum of the digits of the number %d is 0.\n",n);
   }
  while(n!=0){
    digit = n%10;
    quotient = n/10;
    printf("The digits of the entered number is %d\n", digit);
    sum = sum + digit;
    n = quotient;
    }  
 printf("The sum of the en %d", sum);
 return 0;
}
