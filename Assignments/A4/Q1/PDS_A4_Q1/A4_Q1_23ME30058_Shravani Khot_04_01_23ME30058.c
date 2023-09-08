//Name: Shravani Khot
//Roll No.: 23ME30058

#include<stdio.h>
#include<math.h>

int main()
{
  int x,z;
  float y,w;
  printf("Enter the total kilometers travelled \n");
  scanf("%d",&x);
  printf("Enter the hours for which taxi was retained \n");
  scanf("%f",&y);

  if (x<8)
    z=20*x;
  else if ((x>8)&&(x<=12))
    z=160+(x-8)*10;
  else if ((x>12)&&(x<=16))
    z=200+(x-12)*8;
  else if ((x>16)&&(x<=20))
    z=232+(x-16)*6;
  else if (x>20)
    z=256+(x-20)*5;

  if (y<=1)
    w=z;
  else if ((y>1)&&(y<=12))
    w=z+200;
  else if ((y>12)&&(y<=24))
    w=z+500;
  else if ((y>24))
    w=z+500+((y-24)/24.0)*300;

  printf("The fare for the ride is %f.",w);

  return 0;

      }
    

  
    

  
