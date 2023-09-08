#include<stdio.h>
int main()
{
  printf("23AG10047\n");
  printf("Vedaant Nigam\n");
  
  int km,hr,hr_fare,km_fare,sum;
  printf("enter kilometers travelled");
  scanf("%d",&km);
  printf("enter hours the taxi was retained");
  scanf("%d",&hr);
  if(hr<1){hr_fare=0;}
  else if(hr>1 && hr<12){hr_fare=200;}
  else if(hr>12 && hr<24){hr_fare=300;}
  else if (hr>24){hr_fare=600;}
  if(km<8){km_fare=20*km;}
  else if(km>8 && km<12){km_fare=8*20 + 10*(km-8);}
  else if(km>12 && km<16){km_fare=8*20 + 10*4 + 8*(km-12);}
  else if(km>16 && km<20){km_fare=8*20 + 10*4 + 8*4 + 6*(km-16);}
  else if (km>20){km_fare=8*20 + 10*4 + 8*4 +6*4+ 5*(km-20);}
  sum= km_fare + hr_fare;
  printf("total payable money=%d",sum);
  return 0;
}
    
