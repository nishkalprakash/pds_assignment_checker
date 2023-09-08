//Roll No.: 23CS30029
//Name: Kshetrimayum Abo

#include<stdio.h>
int main()
{
  int n ,val , reverse = 0, dignum = 0 ;
  float count = 0.1;
  printf("Enter an integer : ");
  scanf("%d",&n);
  val = n;

  //Checking the number of digits in the number that has been entered
  while(val > 0)
    {
      val = val/10;
      dignum++;
      count = count*10;
    }

  //Creating a number which is the reverse of the number which has been entered
  val = n;
  while(val > 0)
    {
      reverse = reverse + (val%10)*count;
      val = val/10;
      count = count/10;
    }
  //Checking if the reverse number is equal to the entered number
  if (n == reverse)
    printf("The number is a palindrome\n");
  return 0;
}
