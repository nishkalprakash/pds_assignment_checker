//Roll No.:23IE10011
//Name: Avik Ghosh
#include <stdio.h>

int main( ) {
  int km,hr,fuel,rental,taxifare;
    printf("Enter the total number of kilometers travelled\n");
  scanf("%d",&km);
  printf("Enter the hours for which taxi was retained\n");
  scanf("%d",&hr);
  //calculating below fees for fuel consumption
    if(km>0 && km<=8)
       fuel= 20;
    else if(km>8 && km<=12)
      fuel= 20 + ((km-8)*10);
    else if(km>12 && km<=16)
      fuel= 20 + (4*10) + ((km-12)*8);
    else if(km>16 && km<=20)
      fuel= 20 + (4*10) + (4*8) + ((km-16)*6);
    else
      fuel= 20 + (4*10) + (4*8) + (4*6) + ((km-20)*5);
    //calculating below fees for taxi rental
    if(hr<1)
      rental= 0;
    else if(hr>=1 && hr<12)
      rental= 200;
    else if(hr>=12 && hr<24)
      rental=200+300;
    else
      {rental=500;
      while(hr>0)
	{rental=rental+300;
	  hr=hr-24;}}
    //calculating the Taxi fare in variable taxifare
    taxifare=fuel+rental;
      printf("Taxi fare =%d\n",taxifare);
      return 0;
}

