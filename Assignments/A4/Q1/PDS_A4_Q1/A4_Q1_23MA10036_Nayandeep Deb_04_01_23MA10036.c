//Roll no. 23MA10036
//Name: Nayandeep Deb

#include <stdio.h>

int main() {
  int price = 20, time, dist;
  printf("Give distance(in km) and duration(in hours) travelled: ");
  scanf("%d %d", &dist, &time);

  if(dist > 20)
    {
      while (dist > 20)
	{
	  price += 5;
	  dist--;
	}
    }
  if(16 < dist && dist <= 20)
    {
      while (dist > 16)
	{
	  price += 6;
	  dist--;
	}
    }
  if(12 < dist && dist <= 16)
    {
      while (dist > 12)
	{
	  price += 8;
	  dist--;
	}
    }
  if(8 < dist && dist <= 12)
    {
      while (dist > 8)
	{
	  price += 10;
	  dist--;
	}
    }
  if (time >= 1 && time < 12)
    price += 200;
  else if (time >= 12 && time <= 24)
    price += 500;
  else if (time > 24)
    {
      price += 500;
      float i = time / 24.0;
      i--;
      while (i > 0)
	{
	  price += 300;
	  i--;
	}
    }
  printf("Total fare: %d\n", price);
  return 0;
}
