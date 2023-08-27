#include<stdio.h>
int main()
{
  float  num,fnum;
  int inum;
  printf("enter a floating value:");
    scanf("%f",&num);
  inum=num;
    fnum= num-inum;
    printf("integral part of: %d",inum);
    printf("fractional part of: %f",fnum);
    return 0;
}
    
