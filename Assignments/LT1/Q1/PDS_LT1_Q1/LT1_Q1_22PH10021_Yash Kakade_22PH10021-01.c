/* Name: kakade Yash Ashok
   Roll no: 22PH10021
   PDS LAB TEST 1
   Set A
   Question 1 ; Based on 4 points in 2D Euclidian space  */





#include <stdio.h>
#include <math.h>

int main()
{
    int x1,y1,x2,y2,x3,y3,x4,y4 ;  //Variables declared

    printf("Enter coordinate of first point(x1,y1): ");       //Taking inputs
    scanf("%d%d",&x1,&y1);
    printf("Enter coordinate of second point(x2,y2): ");
    scanf("%d%d",&x2,&y2);
    printf("Enter coordinate of third point(x3,y3): ");
    scanf("%d%d",&x3,&y3);
    printf("Enter coordinate of fourth point(x4,y4): ");
    scanf("%d%d",&x4,&y4);

    float A123, A124, A134, A234;     //Declaring area variables

    A123= 0.5*(x1*(y2-y3)-x2*(y1-y3)+x3*(y1-y2));    //Area of triangles formulas
    A124= 0.5*(x1*(y2-y4)-x2*(y1-y4)+x4*(y1-y2));
    A134= 0.5*(x1*(y3-y4)-x3*(y1-y4)+x4*(y1-y3));
    A234= 0.5*(x2*(y3-y4)-x3*(y2-y4)+x4*(y2-y3));

    float a123,a124,a134,a234;      //Another area variables declared for absolute values

    if(A123>=0){                 //To get absolute area values
        a123=A123;
    }
    else {
        a123=-A123;
    }

    if(A124>=0){              //To get absolute area values
        a124=A124;
    }
    else {
        a124=-A124;
    }

    if(A134>=0){                 //To get absolute area values
        a134=A134;
    }
    else {
        a134=-A134;
    }

    if(A234>=0){                 //To get absolute area values
        a234=A234;
    }
    else {
        a234=-A234;
    }



    if( a123<=(a124) && (a123)<=(a134) && (a123)<=(a234)){            //To print area of smallest triangle and points of those 3 points

        printf("points having minimum area are: (%d,%d),(%d,%d),(%d,%d)",x1,y1,x2,y2,x3,y3);
        printf("\nArea=%.2lf",a123);
    }
    else if( (a124)<=(a123) && (a124)<=(a134) && (a124)<=(a234)){

        printf("points having minimum area are: (%d,%d),(%d,%d),(%d,%d)",x1,y1,x2,y2,x4,y4);
        printf("\nArea=%.2lf",a124);
    }

    else if( (a134)<=(a123) && (a134)<=(a124) && (a134)<=(a234)){

        printf("points having minimum area are: (%d,%d),(%d,%d),(%d,%d)",x1,y1,x3,y3,x4,y4);
        printf("\nArea=%.2lf",a134);
    }

    else if( (a234)<=(a123) && (a234)<=(a124) && (a234)<=(a134)){

        printf("points having minimum area are: (%d,%d),(%d,%d),(%d,%d)",x2,y2,x3,y3,x4,y4);
        printf("\nArea=%.2lf",a234);
    }


    return 0;


}
