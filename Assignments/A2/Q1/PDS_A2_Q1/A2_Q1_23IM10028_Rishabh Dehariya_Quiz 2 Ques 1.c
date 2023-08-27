//Roll No - 23IM10028
//Name - Rishabh Dehariya

#include<stdio.h>
int main()
{
  float a;
  printf("Enter the number : ");
  scanf("%f",&a);
  printf("\nThe number you have entered is %f\n", a);

  int b = (int)a;
  printf("Integral part %5d", b);

  float c = a-b;
  printf("Fractional part %0.3f" , c);
  return 0;
}
