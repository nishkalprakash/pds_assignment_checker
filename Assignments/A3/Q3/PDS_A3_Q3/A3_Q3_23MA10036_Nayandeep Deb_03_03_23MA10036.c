//name: Nayandeep Deb
//Roll No. 23MA10036

#include <stdio.h>

int main() {
  int x, y;
  printf("Coordinates: ");
  scanf("%d %d", &x, &y);
  if (x == 0 && y == 0) //conditional for finding quadrant
    {
      printf("Lies on origin(lies on both x and y axis)\n");
    }
  else if (x != 0 && y == 0)
    {
      printf("Lies on x-axis\n");
    }
  else if (x == 0 && y != 0)
    {
      printf("Lies on y-axis\n");
    }
  else if (x > 0 && y > 0)
    {
      printf("Lies in quadrant 1\n");
    }
  else if (x < 0 && y > 0)
    {
      printf("Lies in quadrant 4\n");
    }
  else if (x < 0 && y < 0)
    {
      printf("Lies in quadrant 3\n");
    }
  else if (x > 0 && y < 0)
    {
      printf("Lies in quadrant 2\n");
    }
  return 0;
}
