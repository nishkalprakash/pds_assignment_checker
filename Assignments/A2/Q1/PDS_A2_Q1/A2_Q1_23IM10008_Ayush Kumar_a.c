#include <stdio.h>
int main()
//Roll No. 23IM10008
//Name: AYUSH KUMAR
{
  float num,num2;
  scanf("%f", &num);
  printf("integral part= %d\n",num);
  num2= num- (int)num;
  printf("fractional part=%f\n", num2);
  return 0;
}
