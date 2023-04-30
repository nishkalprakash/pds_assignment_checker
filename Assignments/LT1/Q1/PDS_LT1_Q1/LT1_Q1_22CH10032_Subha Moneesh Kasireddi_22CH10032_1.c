#include<stdio.h>
#include<math.h>

void main()
{
   float x1,x2,x3,x4,y1,y2,y3,y4;
   double l1,l2,l3,l4,l5,l6;
   double s1,s2,s3,s4,a1,a2,a3,a4;
   double max;

   printf("(x1,y1) = ");
   scanf("%f,%f",&x1,&y1);
   printf("(x2,y2) = ");
   scanf("%f,%f",&x2,&y2);
   printf("(x3,y3) = ");
   scanf("%f,%f",&x3,&y3);
   printf("(x4,y4) = ");
   scanf("%f,%f",&x4,&y4);

   //all six possible sides or line segments joining points
   l1=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
   l2=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
   l3=sqrt((x3-x4)*(x3-x4)+(y3-y4)*(y3-y4));
   l4=sqrt((x1-x4)*(x1-x4)+(y1-y4)*(y1-y4));
   l5=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
   l6=sqrt((x2-x4)*(x2-x4)+(y2-y4)*(y2-y4));
   //semi perimeters of four possible triangles
   s1=(l1+l2+l3)/2;
   s2=(l2+l3+l4)/2;
   s3=(l3+l4+l1)/2;
   s4=(l4+l1+l2)/2;
   //areas
   a1=sqrt(s1*(s1-l1)*(s1-l2)*(s1-l3));
   a2=sqrt(s2*(s2-l4)*(s2-l2)*(s2-l3));
   a3=sqrt(s3*(s3-l1)*(s3-l4)*(s3-l3));
   a4=sqrt(s4*(s4-l1)*(s4-l2)*(s4-l4));
   //finding max area
   max=0.0;
   if(a1>a2) max=a1;
   else max=a2;
   if(max>a3) max=max;
   else max=a3;
   if(max>a4) max=max;
   else max=a4;

   //printing output
   if (max==a1)
   printf("\nPoints having the maximum area: (%f,%f),(%f,%f),(%f,%f) \n\n",x1,y1,x2,y2,x3,y3);
   else if (max==a2)
   printf("\nPoints having the maximum area: (%f,%f),(%f,%f),(%f,%f) \n\n",x2,y2,x3,y3,x4,y4);
   else if (max==a3)
   printf("\nPoints having the maximum area: (%f,%f),(%f,%f),(%f,%f) \n\n",x3,y3,x4,y4,x1,y1);
   else if (max==a4)
   printf("\nPoints having the maximum area: (%f,%f),(%f,%f),(%f,%f) \n\n",x4,y4,x1,y1,x2,y2);

   if(max==0) printf("Perimeter = 0 (since there is no triangle)");
   else if (max==a1) printf("Perimeter = %lf",2*s1);
   else if (max==a2) printf("Perimeter = %lf",2*s2);
   else if (max==a3) printf("Perimeter = %lf",2*s3);
   else if (max==a4) printf("Perimeter = %lf",2*s4);
}


