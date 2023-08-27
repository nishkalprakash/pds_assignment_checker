//Roll No:23MF10042
//NAME:Theyanesh Eswaramoorthy Rajahkrishnan
#include <stdio.h>
int main()
{
  float num,dnum;
  int inum;
  printf("Enter a floating point value:\n");
  scanf("%f",&num);
  inum=(int)num;
  dnum=num-inum;
  printf("Integral Part:%d\n",inum);
  printf("Fractional Part:%f\n",dnum);
  return 0;
}
