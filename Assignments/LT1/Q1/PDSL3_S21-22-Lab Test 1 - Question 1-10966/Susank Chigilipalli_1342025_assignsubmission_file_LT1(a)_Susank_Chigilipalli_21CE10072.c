/*This program is to calculate the tax of an employee as per the income tax rules*/
/*Name : Susank Chigilipalli(21CE10072)
  Section : 3A
  Assignment class 6*/
#include<stdio.h>
void main()
{
  float ms=0,hl=0,lip=0,mi=0,tt=0,yi=0;
  printf("Please enter monthly income : ");
  scanf("%f",&ms);
  printf("Please enter house loan : ");
  scanf("%f",&hl);
  printf("Please enter life insurance premium : ");
  scanf("%f",&lip);
  printf("Please enter medical insurance : ");
  scanf("%f",&mi);
  yi=12*ms;
  if(hl<=250000)
  {
    yi=yi-hl;
  }
  else
  {
    yi=yi-250000;
  }
  if(lip<=150000)
  {
    yi=yi-lip;
  }
  else
  {
    yi=yi-150000;
  }
  if(mi<=50000)
  {
    yi=yi-mi;
  }
  else
  {
    yi=yi-50000;
  }
  if(yi<=250000)
  {
    tt=0;
  }
  if(yi>250000&&yi<=500000)
  {
    tt=yi*(5/100);
  }
  if(yi>500000&&yi<=750000)
  {
    tt=12500+(yi-500000)*(10/100);
  }
  if(yi>750000&&yi<=1000000)
  {
    tt=37500+(yi-750000)*(15/100);
  }
  if(yi>1000000&&yi<=1250000)
  {
    tt=75000+(yi-1000000)*(20/100);
  }
  if(yi>1250000&&yi<=1500000)
  {
    tt=125000+(yi-1250000)*(25/100);
  }
  if(yi>1500000)
  {
    tt=187500+(yi-1500000)*(30/100);
  }
  printf("Total tax is : %f\n",tt);
}
