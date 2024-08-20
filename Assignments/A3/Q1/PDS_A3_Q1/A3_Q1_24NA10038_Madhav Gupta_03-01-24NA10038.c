//Creator:Madhav Gupta
//Roll no:24NA10038
//Topic:To get a valid date input
#include <stdio.h>
int main()
{
    int date, month, year;
    scanf("%d, %d, %d", &date, &month, &year);
    if (month == 1, 3, 5, 7, 10, 12 && date> 31)
     printf("Invalid date");
    else if (month == 1, 3, 5, 7, 10, 12 && date <= 31)
     printf("Valid date");
    else if (month == 4, 6, 8, 9, 11 && date <= 30)
     printf("Valid date");
    else if (month == 4, 6, 8, 9, 11 && date > 30)
     printf("Invalid date");
    else if (year%4 == 0 && month == 2 && date <= 29)
     printf("Valid date");
    else if (year%4 == 0 && month == 2 && date > 29)
     printf("Invalid date");
    else if (year %4 == 1, 2, 3 && month == 2 && date <= 28)
     printf("Valid date");
    else if (year%4 == 1, 2, 3 && month == 2 && date > 28)
     printf("Invalid date");
  return 0;
}
