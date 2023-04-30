//yash agarwal
//section 2
//roll-22na10049
//question1 euclidean space
#include <stdio.h>
#include <math.h>
int main()
{
float x1,y1,x2,y2,x3,y3,x4,y4;   // taking input

printf("(x1,y1) = \n");          //  taking the points as input
scanf("%f",&x1);
scanf("%f",&y1);

printf("(x2,y2) = \n");
scanf("%f",&x2);
scanf("%f",&y2);

printf("(x3,y3) = \n");
scanf("%f",&x3);
scanf("%f",&y3);

printf("(x4,y4) = \n");
scanf("%f",&x4);
scanf("%f",&y4);



float d12,d23,d34,d14,d13,d24;     // forcalculating the distance between the points


d12=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
d23=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
d34=sqrt((x3-x4)*(x3-x4)+(y3-y4)*(y3-y4));
d14=sqrt((x4-x1)*(x4-x1)+(y4-y1)*(y4-y1));
d13=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
d24=sqrt((x2-x4)*(x2-x4)+(y2-y4)*(y2-y4));

float a123,a234,a134,a124;   // for calculating the area of the four triangles formed

float s123,s234,s134,s124;   //for calculating the semi perimeter of the four triangles formed

float p123,p234,p134,p124;   //for calculating the  perimeter of the four triangles formed

s123=(d12+d23+d13)/2.0;      //for calculating the semi perimeter of the four triangles formed
s124=(d12+d24+d14)/2.0;
s134=(d14+d34+d13)/2.0;
s234=(d24+d34+d23)/2.0;


a123=s123*(s123-d12)*(s123-d23)*(s123-d13);    // for calculating the area of the four triangles formed
a124=s124*(s124-d12)*(s124-d24)*(s124-d14);
a134=s134*(s134-d13)*(s134-d34)*(s134-d14);
a234=s234*(s234-d23)*(s234-d34)*(s234-d24);

p123=d12+d23+d13;                            //for calculating the  perimeter of the four triangles formed
p124=d12+d24+d14;
p134=d14+d34+d13;
p234=d24+d34+d23;

if(a123==0 && a124==0 && a234==0 && a134==0)     // if the points are collinear
{
     printf("the points constituting the largest triangles are:\n");
      printf("(%.2f,%.2f),(%.2f,%.2f),(%.2f,%.2f)\n",x1,y1,x2,y2,x3,y3);
      printf(" perimeter = 0 since there is no triangle");
       return 0;
}

if(a123>=a124 && a123>=a134 && a123>=a234)      // conditions when we find the largest triangle
  {
      printf("the points constituting the largest triangles are:\n");
      printf("(%.2f,%.2f),(%.2f,%.2f),(%.2f,%.2f)\n",x1,y1,x2,y2,x3,y3);
      printf(" perimeter =");
        printf("%.2f",p123);
        return 0;  // to end the program as soon as we find the first largest triangle useful if two tringles have same area
  }


  if(a124>=a123 && a124>=a134 && a124>=a234)
  {
      printf("the points constituting the largest triangles are:\n");
      printf("(%.2f,%.2f),(%.2f,%.2f),(%.2f,%.2f)\n",x1,y1,x2,y2,x4,y4);
      printf("perimeter =");
        printf("%.2f",p124);
        return 0;

  }


  if(a134>=a123 && a134>=a124 && a134>=a234)
  {
      printf("the points constituting the largest triangles are:\n");
      printf("(%.2f,%.2f),(%.2f,%.2f),(%.2f,%.2f)\n",x1,y1,x4,y4,x3,y3);
      printf("perimeter =");
        printf("%.2f",p134);
        return 0;

  }


  if(a234>=a124 && a234>=a134 && a234>=a123)
  {
      printf("the points constituting the largest triangles are:\n");
      printf("(%.2f,%.2f),(%.2f,%.2f),(%.2f,%.2f))\n",x4,y4,x2,y2,x3,y3);
      printf("perimeter =");
      printf("%.2f",p234);
      return 0;

  }


return 0;
}
