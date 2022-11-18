/*
Name:Biswaranjan Samal
Roll no: 21IM10011
Dept: Industrial and Systems Engineering
Package: Codeblocks
Assignment: 1c
*/

#include<stdio.h>
#include<math.h>
 int main()
 {
  char wood,s,n;
  float w,bp,gst,tp;

  printf("enter type of wood you want:\n");
  scanf ("%c",&wood);
  printf("Enter weight:\n");
  scanf("%f",&w);


  if (wood=='n'){


            bp = 1100*w;
            gst = 220*w;
            tp = 1320*w;
            printf("The base price is %.2f \n",bp);
            printf("The gst price is %.2f \n",gst);
            printf("The total price is %.2f \n",tp);






                 }

else  {


            bp = 780*w;
            gst = 117*w;
            tp = 897*w;
            printf("The base price is %.2f \n",bp);
            printf("The gst price is %.2f \n",gst);
            printf("The total price is %.2f \n",tp);






                 }











 return 0;}
