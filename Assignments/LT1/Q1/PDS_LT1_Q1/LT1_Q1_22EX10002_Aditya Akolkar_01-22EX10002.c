#include<stdio.h>
#include<math.h>
int main()
{

   float x1, x2, x3, x4, y1, y2, y3, y4;
    float area1, area2, area3, area4;

   printf("(x1,y1)= ");
   scanf("%f,%f", &x1, &y1);
    printf("(x2,y2)= ");
   scanf("%f,%f", &x2, &y2);
    printf("(x3,y3)= ");
   scanf("%f,%f", &x3, &y3);
    printf("(x4,y4)= ");
   scanf("%f,%f", &x4, &y4);


    area1 = abs(0.5 * ((x1 * (y2 -y3))+(x2 * (y3-y1)) +(x3 * (y1-y2))));
    area2 = abs(0.5 * ((x2 * (y3 -y4))+(x3 * (y4-y2)) +(x4 * (y2-y3))));
    area3 = abs(0.5 * ((x1 * (y3 -y4))+(x3 * (y4-y1)) +(x4 * (y1-y3))));
    area4 = abs(0.5 * ((x1 * (y2 -y4))+(x2 * (y4-y1)) +(x4 * (y1-y2))));



    if(area1<=area2 && area1<=area3 && area1<=area4)
    {
        printf("Points having minimum area:(%f,%f),(%f,%f),(%f,%f)", x1,y1,x2,y2,x3,y3);
         printf("Area=%f", area1);
    }
    else if(area2<=area1 && area2<=area2 && area2<=area4)
    {
        printf("Points having minimum area:(%f,%f),(%f,%f),(%f,%f)", x2,y2,x3,y3,x4,y4);
         printf("Area=%f", area2);
    }
    else if(area3<=area1 && area3<=area2 && area3<=area4)
    {
        printf("Points having minimum area:(%f,%f),(%f,%f),(%f,%f)", x1,y1,x3,y3,x4,y4);
         printf("Area=%f", area3);
    }
    else if(area4<=area1 && area4<=area2 && area4<=area3)
    {
        printf("Points having minimum area:(%f,%f),(%f,%f),(%f,%f)", x1,y1,x2,y2,x4,y4);
         printf("Area=%f", area4);
    }

}
