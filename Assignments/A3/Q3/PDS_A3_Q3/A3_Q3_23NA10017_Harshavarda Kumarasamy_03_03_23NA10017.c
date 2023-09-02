//Roll No:<23NA10017>
//Name:<Harshavarda Kumarasamy>

#include <stdio.h>

int main()
{ int x, y;

  printf("Type x-coordinate and y-ccordinate of Point p:\n");
  scanf("%u%u", &x, &y);

  if(x==0 && y==0)
    printf("Point p lies on both x-axis and y-axis.");
  else if(x==0 && y != 0)
    printf("Point p lies on the y-axis.");
  else if(x != 0 && y==0)
    printf("Point P lies on the x-axis.");
  else
    {if(x>0 && y>0)
	printf("Point P is in the 1st quadrant.");
     else if(x<0 && y>0)
	printf("Point P is in the 2nd quadrant.");
     else if(x<0 && y<0)
	printf("Point P is in the 3rd quadrant.");
     else
	printf("Point P is in the 4th quadrant.");
    }
  return 0;
}
      
