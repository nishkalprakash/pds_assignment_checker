//if age of person  is given in months convert it into integral years
#include <stdio.h>
int main()
{
  float y;
  int x,z;
  printf("Enter the value of age in months\n");
  scanf("%d",&x);
  y=x/12;
  z=(int)y+1;
  printf("Your age is : %d",z);
    return 0;
}
  
  
