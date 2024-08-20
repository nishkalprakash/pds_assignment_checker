//Creator:Madhav Gupta
//Roll no:24NA10038
//Topic:To differentiate between equality of numbers
#include <stdio.h>
int main()
{
   int a, b, c, d, count;
   scanf("%d %d %d %d", &a, &b, &c, &d);
   count=0;
   if (a == b)
   count++;
   if (a == c)
   count++;
   if (a == d)
   count++;
   if (c == b)
   count++;
   if (d == b)
   count++;
   if (c == d)
   count++;
   if (count == 1)
      printf("Yes");
   else
      printf("No");
   return 0;
}
