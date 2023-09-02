//roll no. <23GG10041>
//name <samriddhi ahuja>
#include <stdio.h>
int main ()
{
  int a, b;
  printf("enter the coordinates (a,b) of the point p=\n");
  scanf("%d%d", &a, &b);
  if (a==0 && b!=0)
    {printf("p lies on the y axis\n");}
 
  else if (a!=0 && b==0)
    {printf("p lies on the x axis\n");}
  else if (a==0 && b==0)
    {printf("p lies on both the axes ie. the origin\n");}
  if (a>0 && b>0)
    {printf("p lies in the first quadrant\n");}
  else
    if (a>0 && b<0)
      {printf("p lies in the second quadrant\n");}
    else if (a<0 &&b>0)
      {printf("p lies in the fourth quadrant\n");}
    else if (a<0 && b<0)
      {printf("p lies in the third quadrant\n");}
  return 0;
}
