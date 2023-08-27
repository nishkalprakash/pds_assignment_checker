/* Roll No= 23MI10052
   Name : Swarup Dhanavade*/

#include<stdio.h>
int main()
{ int r , t;
  float ir,lm;
  printf("Enter amount:");
  scanf("%d",&r);
  printf("Enter Duration:");
  scanf("%d",&t);
  printf("Enter Intrest rate:");
  scanf("%f", &ir);
  lm=r + r*(ir/100)*t;
  printf("Total amount payable is = %f",lm);
  return 0;
}
