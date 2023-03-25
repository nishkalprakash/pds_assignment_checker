#include<stdio.h>
#include<math.h>
int main()
{
 float x1,y1,z1,x2,y2,z2,x3,y3,z3,l1,l2,l3 ;

 printf("A(x1,y1,z1): ");

 scanf("%f %f %f",&x1,&y1,&z1);

    printf("B(x2,y2,z2): ");

 scanf("%f %f %f",&x2,&y2,&z2);

  printf("C(x3,y3,z3): ");

 scanf("%f %f %f",&x3,&y3,&z3);

      l1= sqrt(pow(x1-x2,2)+ pow(y1-y2,2)+pow(z1-z2,2));

      l2= sqrt(pow(x2-x3,2)+ pow(y2-y3,2)+pow(z2-z3,2));

      l3= sqrt(pow(x1-x3,2)+ pow(y1-y3,2)+pow(z1-z3,2));


    printf("A(x1,y1,z1):(%f,%f,%f)\n",x1,y1,z1);

     printf("B(x2,y2,z2):(%f,%f,%f)]\n",x2,y2,z2);

     printf("C(x3,y3,z3):(%f,%f,%f)\n",x3,y3,z3);

   if(l3==l1+l2||l1==l2+l3||l2==l1+l3)

   {
       printf("The given three points are collinear\n");
   }

  else{
    printf("The given three points are non collinear\n");
  }

  if(x1>x2 && x1>x3)
  if(x2>x3) printf("A>B>C"); else if(x2<x3) printf("A>C>B");

  if(x2>x1 && x2> x3)
  if(x1>x2) printf("B>A>C") ; else if(x1<x2) printf("B>C>A");

  if(x3>x2 && x3>x1)
  if(x2>x1) printf("C>B>A"); else if(x1>x2) printf("C>A>B");

if(x1==x2)
    if(y1>y2 && y1>y3) if(y2>y3) printf("A>B>C");else if(y2<y3) printf("A>C>B");

  return 0;

}
