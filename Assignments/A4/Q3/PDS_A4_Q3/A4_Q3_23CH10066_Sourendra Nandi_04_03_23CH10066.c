//Name :Sourendra Nandi
//Roll no : 23CH10066
#include <stdio.h>
int main()
{
  int num,temp,rev=0,rem;
  printf("Enter the number : ");
  scanf("%d",&num);
  temp=num;
  while (temp>0)
    {
      rem=temp%10;
      rev=rev*10+rem;
      temp=temp/10;
    }
  printf("Reverse number = %d\n",rev);
  if (rev==num)
    {
      printf("Number %d is Palindrome \n",num);
    }
  else printf("Number %d is not Palindrome \n",num);
  return 0;
}
