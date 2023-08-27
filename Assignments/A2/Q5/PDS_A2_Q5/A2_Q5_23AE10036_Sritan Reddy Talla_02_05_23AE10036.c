#include<stdio.h>
int main(){
 //T.Sritan Reddy
  //23AE10036

  int a,b,c,d,area,peri;
  float p,q;
  printf("enter the values of a,b(top left coner):\n");
  scanf("%d %d",&a,&b);

   printf("enter the values of c,d(top right coner):\n");
   scanf("%d %d",&c,&d);

   area=(c-a)*(d-b);
   peri=2*((c-a)+(d-b));

 printf(" the values of area & perimeter are %d %d",area, peri);
 
 p=a+c/2; q=b+d/2;
 printf("the coordinate of mid point of diagonals is ( %f, %f)",p,q);
 
  return 0;
}
