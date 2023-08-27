//Roll No.:<23GG10041>
//Name:<Samriddhi>
#include <stdio.h>
int main()
{
  int a,b,c,d, area, perim;
  float p,q;
    printf("enter the coordinates a,b =\n");
    scanf("%d%d", &a,&b);
  printf("enter the coordinates c,d =\n");
  scanf("%d%d", &c,&d);
  area = (c-a)*(d-b);
  perim = ((c-a)+(d-b))*2;
  printf("area and perim of the rectangle respectively are=%d %d\n", area, perim);
  p= (c+a)/2;
  q=(b+d)/2;
  printf("coordintes of the point (p,q) respectively are= %f %f\n", p , q);
  return 0;
}
