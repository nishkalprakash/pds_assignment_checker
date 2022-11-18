/*
Name- Krish Agarwal
Roll No.- 21NA10018
Department- Ocean Engineering and Naval Architecture
IDE- Codeblocks
Section- 3
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int day;
    float mac,cars,k,f; //inputting Data

    printf("Enter the number of machines: ");
	scanf("%f",&mac);

	printf("Enter Day number(1-7): ");
	scanf("%d",&day);


	switch(day) //switch used for different cases
	{
	      case 1:
	      cars=mac;
	      break;

	      case 2:
	      cars = 7*mac/4;
          if(cars-(int)cars>=0.5)
          {
              cars=(int)cars +1;
          }
          else
          {
              cars=(int)cars;
          }
	      break;

	      case 3:
          printf("Enter no. of machines under inspection: ");
	      scanf("%f",&k);
	      cars=7*(mac-k)/4;
	      if(cars-(int)cars>=0.5)
          {
              cars=(int)cars +1;
          }
          else
          {
              cars=(int)cars;
          }
	      break;

	      case 6:
	      printf("Enter no. of machines under inspection: ");
	      scanf("%f",&k);
	      cars=7*(mac-k)/4;
	      if(cars-(int)cars>=0.5)
          {
              cars=(int)cars +1;
          }
          else
          {
              cars=(int)cars;
          }
	      break;

	      case 4:
          printf("Enter boosting fraction: ");
	      scanf("%f",&f);
          cars=mac + f*mac;
          if(cars-(int)cars>=0.5)
          {
              cars=(int)cars +1;
          }
          else
          {
              cars=(int)cars;
          }
	      break;

	      case 5:
	      printf("Enter boosting fraction: ");
	      scanf("%f",&f);
          cars=mac + f*mac;
          if(cars-(int)cars>=0.5)
          {
              cars=(int)cars +1;
          }
          else
          {
              cars=(int)cars;
          }
	      break;

	      case 7:
	      printf("Enter boosting fraction: ");
	      scanf("%f",&f);
          cars=mac + f*mac;
          if(cars-(int)cars>=0.5)
          {
              cars=(int)cars +1;
          }
          else
          {
              cars=(int)cars;
          }
	      break;

	}

	printf("Number of manufactured cars = %0.0f\n",cars); //Printing Output
	return 0;
}
