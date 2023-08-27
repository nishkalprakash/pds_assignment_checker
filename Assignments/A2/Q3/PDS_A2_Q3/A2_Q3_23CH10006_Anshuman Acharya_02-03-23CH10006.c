//Roll No:23CH10006
//Name: Anshuman Acharya
#include<stdio.h>
int main()
{float p, t, r, i, s;
  printf("Enter your principal amount, rate of interest, time in years\n");
  scanf("%f %f %f",&p, &t, &r);
  i = p*t*r/100;
  s = p + i;
  printf("Your interest after %f years is %f\nAnd total amount to be paid is %f",t,i,s);
  return 0;
}
