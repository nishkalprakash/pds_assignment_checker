#include<stdio.h>
// NAME-ANMOL KUMAR MISHRA
// SECTION-3
// ROLL NO.- 21EC30060
//PDS LAB TEST

void swap(int *x, int* y)
{
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
}

int main()
{
  int a, b, c;
  printf("Enter three integers: "); // PRINT 
  scanf("%d%d%d", &a, &b, &c);
  printf("\n---Before Function Call---\n");
  printf("Address of a = %p\nAddress of b = %p\nAddress of c = %p\n", &a, &b, &c);
  printf("Values: a = %d, b = %d, c = %d\n", a, b, c);
  if (a>b) swap(&a, &b);
  if (b>c)
  {
    swap(&b, &c);
    if (a>b) swap(&a, &b);
  }
  printf("\n---After Function Call---\n");
  printf("Address of a = %p\nAddress of b = %p\nAddress of c = %p\n", &a, &b, &c);
  printf("Values: a = %d, b = %d, c = %d", a, b, c);
  return 0;
}
