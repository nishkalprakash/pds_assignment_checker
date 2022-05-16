/*
Tushar Kumar
21CH30035
Chemical Engineering
Section 3
Code Blocks
Windows 10
*/
#include<stdio.h>
int main()
{
  int number;
  printf("Enter a three digit number");
  scanf("%d",&number);
  int ones=number/100;
  int utility=number%100;
  int tens=utility/10;
  int hundreds=utility%10;
  printf("%d%d%d",hundreds,tens,ones);
  return 0;


}
