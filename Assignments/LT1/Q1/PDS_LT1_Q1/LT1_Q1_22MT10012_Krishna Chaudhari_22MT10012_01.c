//Name: krishna chaudhari
// roll no. : 22MT10012




#include<stdio.h>
#include<math.h>
int main()
{
    float x1,x2,x3,x4,y1,y2,y3,y4,a1,a2,a3,a4,p1,p2,p3,p4;
    printf("Enter the coordinate for first point:\n");
    scanf("%f,%f",&x1,&y1);

    printf("Enter the coordinate for second point:\n");
    scanf("%f,%f",&x2,&y2);

    printf("Enter the coordinate for third point:\n");
    scanf("%f,%f",&x3,&y3);

    printf("Enter the coordinate for fourth point:\n");
    scanf("%f,%f",&x4,&y4);

    a1=x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2)*(1/2);               //calculate the area of first 3 points
    a2=x2*(y3-y4)+x3*(y4-y2)+x4*(y2-y3)*(1/2);
    a3=x3*(y4-y1)+x4*(y1-y3)+x1*(y3-y4)*(1/2);
    a4=x4*(y1-y2)+x1*(y2-y4)+x2*(y4-y1)*(1/2);
    if(a1<0) a1=-a1;                             // if area is calculated negative it converts it to positive value
    if(a2<0) a2=-a2;
    if(a3<0) a3=-a3;
    if(a4<0) a4=-a4;

    p1=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))+sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3))+sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
    p2=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y2))+sqrt((x3-x4)*(x3-x4)+(y3-y4)*(y3-y4))+sqrt((x4-x2)*(x4-x2)+(y4-y2)*(y4-y2));
    p3=sqrt((x4-x1)*(x4-x1)+(y4-y1)*(y4-y1))+sqrt((x3-x4)*(x3-x4)+(y3-y4)*(y3-y4))+sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));     //calculate the perimeter of three points
    p4=sqrt((x4-x1)*(x4-x1)+(y4-y1)*(y4-y1))+sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))+sqrt((x2-x4)*(x2-x4)+(y2-y4)*(y2-y4));


    //printf("areas are : %f,%f,%f,%f \n",a1,a2,a3,a4);
   // printf("perimeter is %f",p1);

    if(a1>=a2 && a1>=a3 && a1>=a4)
    {
        printf("Points having the maximum area: (%f,%f),(%f,%f),(%f,%f) \n",x1,y1,x2,y2,x3,y3);
        if(p1==0) printf("perimeter = 0  (since there is no triangle)");
        else printf("Perimeter = %.2f",p1);
    }

    else if(a2>=a1 && a2>=a3 && a2>=a4)
    {
         printf("Points having the maximum area: (%f,%f),(%f,%f),(%f,%f) \n",x2,y2,x3,y3,x4,y4);
          if(p2==0) printf("perimeter = 0  (since there is no triangle)");
          else printf("Perimeter = %.2f",p2);
    }
    else if(a3>=a1 && a3>=a2 && a3>=a4)
    {
         printf("Points having the maximum area: (%f,%f),(%f,%f),(%f,%f) \n",x1,y1,x3,y3,x4,y4);
          if(p3==0) printf("perimeter = 0  (since there is no triangle)");
         else printf("Perimeter = %.2f",p3);
    }
    else if(a4>=a1 && a4>=a2 && a4>=a3)
    {
         printf("Points having the maximum area: (%f,%f),(%f,%f),(%f,%f) \n",x1,y1,x2,y2,x4,y4);
          if(p4==0) printf("perimeter = 0  (since there is no triangle)");
         else printf("Perimeter = %.2f",p4);
    }

    return 0;
}
