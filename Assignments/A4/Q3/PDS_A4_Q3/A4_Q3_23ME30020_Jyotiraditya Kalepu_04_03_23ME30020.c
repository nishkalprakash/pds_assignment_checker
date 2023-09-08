//Roll No: 23ME30020
//Name: Kalepu Jyotiraditya

#include <stdio.h>
int main()
{
  int num, copy,palin=0,digit=0;
  printf("Enter a number ");
  scanf("%d",&num);
  copy = num;   // Making a copy of the number entered
  /* Extacting digits 
     and forming the revrse of the entered number*/
  while(num>0)
    {
      digit=num%10;
      palin = palin*10 + digit;
      num = num/10;
    }
  /* Checking if the number is palindrome or not*/
  if(palin==copy)printf("Number entered is a palindrome\n");
  else printf("Number entered is not a palindrome\n");
  return 0;
}
