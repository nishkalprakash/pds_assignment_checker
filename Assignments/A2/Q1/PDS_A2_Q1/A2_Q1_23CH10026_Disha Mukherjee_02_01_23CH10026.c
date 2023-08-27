//Roll No:23CH10026
//Name:Disha Mukherjee
#include <stdio.h>

int main()
{
  float n,fn;
  int in;
  printf("enter a floating point number\n");
  scanf("%f",&n);
  in=(int)n;
  fn=n-in;
  printf("\n Integral Part=%d",in);
  printf("\n Fractional part=%f",fn);
  return 0;
}

