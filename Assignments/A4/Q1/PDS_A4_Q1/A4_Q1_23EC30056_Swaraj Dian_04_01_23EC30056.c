//Name: Swaraj Dian
//Roll  no.: 23EC30056

#include <stdio.h>
int main()
{
  int km=0,hr=0,fare=0,day=0;
  printf("Enter total Kms travelled: ");
  scanf("%d",&km);
  printf("Enter Hrs the taxi was retained: ");
  scanf("%d",&hr);
  //calculating kms
  if (km<=8)
    fare=20;
  else if ((km>8)&&(km<=12))
    fare=20+(km-8)*10;
  else if ((km>12)&&(km<=16))
    fare=60+(km-12)*8;
  else if ((km>16)&&(km<=20))
    fare=92+(km-16)*6;
  else if(km>20)
    fare=116+(km-20)*5;
  //Calculating  days
  day=hr/24;
  if ((hr/24.0)>day)
    day=day+1;
  //calculating rental
  if ((hr>=1)&&(hr<=12))
    fare=fare+200;
  else if ((hr>12)&&(hr<=24))
    fare=fare+200+300;
  else if (hr>24)
    fare=fare+500+(day-1)*300;
  printf("The taxi fare is: %d",fare);
}
