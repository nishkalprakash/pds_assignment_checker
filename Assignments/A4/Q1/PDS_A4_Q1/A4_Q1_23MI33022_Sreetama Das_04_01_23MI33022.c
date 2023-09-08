#include <stdio.h>
int main()
{
  int kilo, hour, fare, totalfare, dist;
  printf("Enter the total number of kilometers travelled by taxi= ");
  scanf("%d", &kilo);
  printf("Enter the total number of hours travelled by taxi= ");
  scanf("%d", &hour);
  if(kilo<=8) //checking if the distance  travelled is 8 kilometers 
    {
      fare= 20;
      printf("The taxi fare is %d rupees ", fare);
    }
  else if(kilo>8 && kilo<=12) //checking if the distance  travelled is between 8 kilometers to 12 kilometers
    {
      dist= kilo-8; //substracting the total kilometer travelled from first 8 kilometers to get the kilometer travelled in between the next 4 kilometers
      fare= 10*dist; // multiplying the substracted kilometer by 10 to get the fare per kilometer 
      totalfare= fare+20; //adding the total fare to be given
       printf("The taxi fare is %d rupees ", totalfare);
    }
  else if(kilo>12 && kilo<=16) //checking if the distance  travelled is between 12 kilometers to 16 kilometers
    {
      dist= kilo-12; //substracting the total kilometer travelled from first 12 kilometers to get the kilometer travelled in between the next 4 kilometers
      fare= 8*dist; // multiplying the substracted kilometer by 8 to get the fare per kilometer
      totalfare= fare+60;  //adding the total fare to be given
      printf("The taxi fare is %d rupees", totalfare);
    }
   else if(kilo>16 && kilo<=20) //checking if the distance  travelled is between 16 kilometers to 20 kilometers
    {
      dist= kilo-16; //substracting the total kilometer travelled from first 16 kilometers to get the kilometer travelled in between the next 4 kilometers
      fare= 6*dist; // multiplying the substracted kilometer by 6 to get the fare per kilometer
      totalfare= fare+92;  //adding the total fare to be given
      printf("The taxi fare is %d rupees", totalfare);
    }
   else if(kilo>20) //checking if the distance  travelled is between 20 kilometers
    {
      dist= kilo-20; //substracting the total kilometer travelled from first 20 kilometers to get the kilometer travelled after 20 kilometers
      fare= 5*dist; // multiplying the substracted kilometer by 5 to get the fare per kilometer
      totalfare= fare+116;  //adding the total fare to be given
      printf("The taxi fare is %d rupees", totalfare);
    }
   else
     {
       printf("Wrong input ");
     }
  if(hour<1) //checking if hours travelled is less than 1 hour
    {
      printf("No rental ");
    }
  else if(hour>=1 && hour<12) //checking if hours travelled is between 1 to 12 hours
  {
    printf("The rental is charged at a flat rate of rupees 200 ");
  }
   else if(hour>=12 && hour<24) //checking if hours travelled is between 12 to 24 hours
  {
    printf("The rental is charged at a flat rate of rupees 500 ");
  }
   else if(hour>=24) //checking if hours travelled is more than or equal to 24 hours
  {
    printf("The rental is charged at a flat rate of rupees 800 ");
  }
  else
    {
      printf("Wrong input ");
    }
  return 0;
}
  
