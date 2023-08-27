//Roll No.: 23ME30039
//Name: PILLI ASISH CHANDAN

#include<stdio.h>
#include<math.h>

int main() {
  float a;
  printf("enter the value of a");
  scanf("%f", &a);
  int b;
  b = (int)a;
  printf("integral part is %d \n", b);
  printf("fractional part is %f \n",a-b);
  return(0);
}
