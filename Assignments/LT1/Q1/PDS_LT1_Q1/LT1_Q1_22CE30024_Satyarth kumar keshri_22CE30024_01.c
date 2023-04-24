#include<stdio.h>
#include<math.h>
int main()

{
    float x1,y1,x2,y2,x3,y3,x4,y4,area1,area2,area3,area4;

    printf("Enter the points\n");

    printf("(x1,y1) : ");
    scanf("%f %f", &x1, &y1);
    printf("\n") ;

    printf("(x2,y2) : ");
    scanf("%f %f", &x2 , &y2);
    printf("\n") ;

    printf("(x3,y3) : ");
    scanf("%f %f" , &x3 , &y3);
    printf("\n") ;

    printf("(x4,y4) : ");
    scanf("%f %f" , &x4 , &y4);
    printf("\n") ;

    area1== 0.5*((x2-x1)*(y3-y1)  - (x3-x1)*(y2-y1));

    area2== 0.5*((x2-x1)*(y4-y1)  - (x4-x1)*(y2-y1));

    area3== 0.5*((x3-x1)*(y4-y1)  - (x4-x1)*(y3-y1));

    area4== 0.5*((x3-x2)*(y4-y2)  - (x4-x2)*(y3-y2));

    // finding area individually//


    min= area1;

    min= min<area2? min:area2;

    min= min<area3? min:area3;

    min= min<area4? min:area4;


   // taking area minimum//



    if(min=area){

        printf("the points having minimum area are : (("%f,%f") , ("%f,%f") , ("%f,%f") \n" , (x1,y1) , (x2,y2) , (x3,y3) );
    }

       else if
        {  printf("the points having minimum area are : (("%f,%f") , ("%f,%f") , ("%f,%f") \n" , (x1,y1) , (x2,y2) , (x4,y4));

        }

       else if
        {  printf("the points having minimum area are : (("%f,%f") , ("%f,%f") , ("%f,%f") \n" , (x1,y1) , (x4,y4) , (x3,y3));
        }

       else if
        {  printf("the points having minimum area are : (("%f,%f") , ("%f,%f") , ("%f,%f") \n" , (x4,y4) , (x2,y2) , (x3,y3));
        }

        //conditions drawn//


        printf("( Area = "%f")");s


    return 0;
}
