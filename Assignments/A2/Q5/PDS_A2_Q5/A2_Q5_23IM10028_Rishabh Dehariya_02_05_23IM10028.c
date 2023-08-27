//Roll No - 23IM10028
//Name - Rishabh Dehariya

#include<stdio.h>
int main()
{
  int a,b,c,d;
  printf("Enter the values of a and b:");
  scanf("%d %d", &a, &b);

  printf("\nEnter the values of c and d:");
  scanf("%d %d", &c, &d);

  int area = ((c-a)*(d-b));
  int perim = 2*((c-a)+(d-b));

  printf("The area of the rectangle is %d and the perimeter is equal to %d", area, perim);

  float p = (float)((c-a)/2);
  float q = (float)((d-b)/2);

  printf("\nThe point of intersection of the given rectangle is (%f,%f).\n", p , q);

  return 0;
}

  
