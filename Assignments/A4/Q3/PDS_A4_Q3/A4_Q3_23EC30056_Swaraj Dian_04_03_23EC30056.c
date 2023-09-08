//Name: Swaraj Dian
//Roll No: 23EC30056

#include <stdio.h>
int main()
{
  int no=0,rev=0,copy=0,digit=0;
  printf("Enter the number: ");
  scanf("%d",&no);
  copy=no;         //keeping a copy of number
  while(copy>0)    //reversing the number
    {
      digit=copy%10;
      rev=rev*10+digit;
      copy=copy/10;
    }
  if (rev==no)     //Checking for palindrome
    printf("The entered number is a palindrome\n");
  else
    printf("The entered number is not a palindrome\n");
}
