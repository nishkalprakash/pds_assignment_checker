/*
Section 14
Roll No.:22AG10021
Name: Mahin Hussain
Lab Test No.:1
Description: Program to print pattern used on user input.
*/

#include<stdio.h>
int c=1,n;
int main()
{
  printf("Enter the number in the range [2,10]\n");
  scanf("%d",&n);                                //Asking the user to input the number and accepting the number
  if(n>=2&&n<=10)                               //Checking if the number is in desired range or not
  {
   for(int i=1;i<=n;i++)                       //i is loop variable, loop for printing n number of lines
   {
    for(int j=1;j<=i;j++)                     //j is loop variable, loop for printing numbers in same line
     printf("%d",c);                         //printing number on the same line
    c++;                                     //incrementing the number to be printed on next line
    printf("\n");                            //changing line
   }  
  }
  else
  printf("INVALID INPUT");                  //for inputted number out of range
  return 0;
}
