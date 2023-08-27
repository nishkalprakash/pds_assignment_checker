// Roll NO - 23AG30019 //
// Name - Khyatish Bhagat //

#include <stdio.h>
int main ()

{
  int a,b,c,d ,area,perimeter;
  printf ( " Enter the coordinates of Bottom left corner point :\n");
  scanf("%d%d", &a,&b);
  printf (" Enter the coordinated of Top right corner point ;\n");
  scanf ("%d%d", &c,&d);
  area= ( c-a)*(d-b);
  perimeter= 2* ( (c-a)+(d-b));
  printf ( " Area of the rectangle is :%d\n", area);
  printf ( " Perimeter of the rectangle is:%d\n",perimeter);

  float p,q;
  p=(float)(a+c)/2;
  q=(float)(b+d)/2;
  printf (" Coordinates of point of interection of diagonals:(%f,%f)\n",p,q ); 



  
  return 0 ;
}
  
