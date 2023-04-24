#include<studio.h>
int main()

{
    int x1,y1,x2,y2,x3,y3,x4,y4;

    printf("Enter the points \n");
    printf("(x1,y1):  ");
    scanf("%d %d" , &x1 , &y1);
    printf("\n");

    printf("(x2,y2): ");
    scanf("%d %d" , &x2 , &y2);
    printf("\n");

    printf("(x3,y3): ");
    scanf("%d %d" , &x3 , &y3);
    printf("\n");

    printf("(x4,y4): ");
    scanf("%d %d" , &x4 , &y4);
    printf("\n");

    area1 = 0.5*((x1-x2)*y3 + (x2-x3)*y1 + (x3-x1)*y2);
    area2 = 0.5*((x1-x2)*y4 + (x2-x4)*y1 + (x4-x1)*y2);
    area3 = 0.5*((x4-x2)*y3 + (x2-x3)*y4 + (x3-x4)*y2);
    area4 = 0.5*((x1-x4)*y3 + (x4-x3)*y1 + (x3-x1)*y4);

    // finding area individually

    max=  area1;
    max= max>area2? max:area2;
    max= max>area3? max:area3;
    max= max>area4? max:area4;


    if(max=area){

         printf("The points having maximum area of Triangle : (%d,%d) , (%d,%d) , (%d,%d) \n" , (x1,y1) , (x2,y2) , (x3,y3));

         else if
         printf("The points having maximum area of Triangle : (%d,%d) , (%d,%d) , (%d,%d) \n");
    }

    return 0;
}
