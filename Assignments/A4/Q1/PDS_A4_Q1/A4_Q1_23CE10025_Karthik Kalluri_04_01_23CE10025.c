#include <stdio.h>
int main()
{
  int fare,rent,t,km,tot;
  printf("The km you travelled :\n");
  scanf("%d",&km);
  printf("The time you rented the vehicle: \n");
  scanf("%d",&t);
  if(t<=1)
      rent =0;
  else if ((t>=1)&&(t<12))
    rent = 200;
  else if ((t>=12)&&(t<24))
    {
      
      rent =500;
    }
  else if(t=24)
    {
      rent=800;
    }
  else
    {
      rent =500;
      t=(t/24)+1;
      rent=t*300+500;
    }
  if(km<=8)
    fare=20;
  else if((km>8)&&(km<=12))
    {
      km=km-8;
      fare=10*km+20;
    }
  else if((km>12)&&(km<=16))
    { 
      km=km-12;
      fare=8*km+60;
    }
  else if((km>16)&&(km<=20))
    {
      km=km-16;
      fare=6*km+92;
    }
  else
    {
      km=km-20;
      fare=5*km+116;
    }
  tot=rent+fare;
  printf("The total amount payable is %d rupees\n",tot);
  return 0;
}
