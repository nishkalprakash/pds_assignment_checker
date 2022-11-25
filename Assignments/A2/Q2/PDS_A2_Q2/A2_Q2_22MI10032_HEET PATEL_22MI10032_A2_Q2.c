#include<stdio.h>
int main ()
{

  int a; // to declare variable a of integer datatype
  char c;// to declare variable c of character datatype
  float f;// to declare variable f of float datatype

  printf("Enter Two digit number and character\n");
  scanf("%2d %c", &a,&c);

  

  printf("Enter float number\n");
  scanf("%f", &f) ;
  printf ("%2d %c %f " , a ,c, f );
  return 0 ;
}
