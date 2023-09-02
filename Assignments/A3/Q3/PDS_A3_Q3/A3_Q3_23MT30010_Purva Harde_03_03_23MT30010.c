//Rollno:<23MT30010>
//Name:<Purva Harde>

#include<stdio.h>
int main()
{
  int p,q;
    printf("Enter the coordinates\n");
  scanf("%d %d", &p, &q);
  if (p==0 && q==0)
    printf("point lies on origin");
  else if (p==0)
    printf("point lies on y axis");
  else if (q==0)
    printf("point lies on x axis");
  else if (p>0, q>0)
    printf("point lies in 1 quadrant");
  else if (p>0, q<0)
    printf("point lies in 2 quadrant");
  else if (p<0, q<0)
    printf("point lies in 3 quadrant");
  else printf("point lies in 4 quadrant");
  return 0;
}
