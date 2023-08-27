//Roll No:23EE30017
//Name:Ranga Kiranmai
#include <stdio.h>
int main()
{
  int x,z;
  float y;
  printf("Type your age in months\n");
  scanf("%d",&x);
  y=(float)x/12;
  z=y+1;
  if(x%12==0) {printf("Your age is %f years",y);}
  else {printf("Your age if %d years",z);}
  return 0;
}
  
