#include<stdio.h>
int main()
   {

   float(a1,b1,c1,a2,b2,c2,a3,b3,c3,n1,n2,n3);

   printf("A(a1,b1,c1): ");

   scanf(%f,%f,%f, &a1,&b1,&c1);

   printf("B(a2,b2,c2): ");

   scanf(%f,%f,%f, &a2,&b2,&c2);

   printf("C(a3,b3,c3): ");

   scanf(%f,%f,%f, &a3,&b3,&c3);



   n1= sqrt(pow(a1-a2,2) + pow(b1-b2,2) + pow(c1-c2,2));

   n2= sqrt(pow(a2-a3,2) + pow(b2-b3,2) + pow(c2-c3,2));

   n3= sqrt(pow(a3-a1,2) + pow(b3-b2,2) + pow(c3-c1,2));

   printf("A(a1,b1,c1): (%f,%f,%f)\n" ,a1,b1,c1);

   printf("A(a2,b2,c2): (%f,%f,%f)\n" ,a2,b2,c2);

   printf("A(a3,b3,c3): (%f,%f,%f)\n" ,a3,b3,c3);


    if(n3=n1+n2|| n2=n1+n3|| n1=n2+n3);
    {

  printf("The given points are collinear\n");

   }

   else{

    printf("The given points are non-collinear\n");

   }
 return0;
 }
