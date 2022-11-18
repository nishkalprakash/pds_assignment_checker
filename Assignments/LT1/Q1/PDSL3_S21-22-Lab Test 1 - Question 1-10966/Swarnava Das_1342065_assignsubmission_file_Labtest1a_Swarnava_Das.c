// NAME: SWARNAVA DAS
// ROLL: 21NA10037
// DEPARTMENT: OCEAN ENGINEERING AND NAVAL ARCHITECTURE
// PACKAGE: VISUAL STUDIO CODE
// ASSIGNMENT CLASS:5

#include <stdio.h>
int main()
{
    int a, b, c, d, e, t,i;
    printf("ENTER YOUR MONTHLY SALARY\n");
    scanf("%d", &a);
    printf("ENTER YOUR YEARLY HOUSE LOAN PAID\n");
    scanf("%d", &b);
    printf("ENTER YOUR YEARLY LIFE INSURANCE PREMIUM PAID\n");
    scanf("%d", &c);
    printf("ENTER YOUR YEARLY HOUSE LOAN PAID\n");
    scanf("%d", &d);
    e = a * 12;
    if (b > 250000)
    {
        b = 250000;
    }
    if (c > 150000)
    {
        c = 150000;
    }
    if (d > 50000)
    {
        d = 50000;
    }

    if (e >= 1000000)
    {
        i = (e - (b + c + d));
    }
    else
    {
        i = e;
    }
  if ((i>=0)&&(i<=250000))
  {
      t=(0);
  }
  else if ((i>250000)&&(i<=500000))
  {
      t=(i*5/100);
  }
 else  if ((i>500000)&&(i<=750000))
  {
      t=(12500+((i-500000)*10/100));
  }
else  if ((i>750000)&&(i<=1000000))
  {
      t=(37500+((i-750000)*15/100));
  }
else  if ((i>1000000)&&(i<=1250000))
  {
      t=(75000+((i-1000000)*20/100));
  }
else  if ((i>1250000)&&(i<=1500000))
  {
      t=(125000+((i-1250000)*25/100));
  }
else  if (i>1500000)
  {
      t=(187500+((i-1500000)*30/100));
  }

printf("Total tax:%d",t);



    return 0;
}
