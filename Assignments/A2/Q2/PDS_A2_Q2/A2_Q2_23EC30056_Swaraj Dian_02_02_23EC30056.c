//Roll No.: 23EC30056
//Name: Swaraj Dian

#include <stdio.h>
int main()
{
  int a,iy;
  float y=0;
  printf("Enter your age in months: ");
  scanf("%d",&a);
  y=a/12.0;
  iy=a/12;
  if (y>iy)
	 iy=iy+1;
  printf("The person is %d years old",iy);
}
  
