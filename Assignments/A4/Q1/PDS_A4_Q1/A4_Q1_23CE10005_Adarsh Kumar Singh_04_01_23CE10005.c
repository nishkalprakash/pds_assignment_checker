// Name - Adarsh Kumar Singh
// Roll No. 23CE10005

#include <stdio.h>
int main ()
{
  float km, hours, mins;
  printf("\nEnter the total kms travelled in the taxi ride: ");
  scanf("%f", &km);
  printf("Enter the time for which the taxi was rented ( hh mm ): ");
  scanf("%f%f", &hours, &mins);
  hours = hours + (mins/60);

  int fare = 0;
  if (km > 0)
    {
      fare = fare + 20;
    }
  if (km > 8)
	{
	  for (int i=9; i<=km; i++)
	    {
	      fare = fare + 10;
	    }
	}
      if (km > 12)
	{
	  for (int i=13; i<=km; i++)
	    {
	      fare = fare + 8;
	    }
	}
      if (km > 16)
	{
	  for (int i=17; i<=km; i++)
	    {
	      fare = fare + 6;
	    }
	}
      if (km > 20)
	{
	  for (int i=21; i<=km; i++)
	    {
	      fare = fare + 5;
	    }
	}
    

  if (hours >= 1 && hours < 12)
    {
      fare = fare + 200;
    }
  if (hours >= 12 && hours < 24)
    {
      fare = fare + 300;
    }
  if (hours >= 24)
    {
      for (int i = 1; hours >= 24*i; i++)
	{
	  fare = fare + 300;
	}
    }
  printf("\nThe total fare of the ride is %d", fare);
  printf("\n\nThankyou\n\n");
  return 0;
}
  
  
  
    
    
  
