//Roll no.: 23CH10066
//Name : Sourendra Nandi
#include <stdio.h>
int main()
{
  int month,yr,rem;
  printf("Enter the the age in months : ");
  scanf("%d",&month);
  yr=month/12;
  rem=month%12;
  if (rem>0)
    {
      yr=yr+1;
    }
  printf("The person is %d years old \n",yr);
  return 0;
}
