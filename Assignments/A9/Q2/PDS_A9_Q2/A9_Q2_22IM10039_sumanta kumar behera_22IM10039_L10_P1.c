# include<stdio.h>
# include<math.h>
// finding wheather two circles intersect or not
struct circle {
     int x;
     int y;
     float r;
 }; 
int main ()
{
    struct circle c1, c2;
    printf("x y r\n");
    scanf("%d %d %f", &c1.x, &c1.y, &c1.r);
    scanf("%d %d %f", &c2.x, &c2.y, &c2.r);
    float d;
    d=sqrt(pow(c1.x - c2.x, 2) + pow(c1.y - c2.y, 2));
   if(d < (c1.r + c2.r))
  {
    printf("Circles intersect");
  }
   else
  {
    printf("Circles don't intersect");
  } 
    return 0;
  }
