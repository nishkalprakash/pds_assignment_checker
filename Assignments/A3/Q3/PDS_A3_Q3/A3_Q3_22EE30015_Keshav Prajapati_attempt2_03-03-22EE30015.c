//22EE30015
#include<stdio.h>

int main()
{
    float x1, y1, z1, x2, y2, z2, x3, y3, z3;

    // Taking inputs of coordinates
    printf("Enter each coordinate of a point in a different line\n");
    printf("A(x1,y1,z1) : \n");
    scanf("%f %f %f", &x1, &y1, &z1);
    printf("B(x2,y2,z2) : \n");
    scanf("%f %f %f", &x2, &y2, &z2);
    printf("C(x3,y3,z3) : \n");
    scanf("%f %f %f", &x3, &y3, &z3);

    //Showing users input
    printf("A(x1,y1,z1) : (%f, %f, %f)\n", x1, y1, z1);
    printf("B(x2,y2,z2) : (%f, %f, %f)\n", x2, y2, z2);
    printf("C(x3,y3,z3) : (%f, %f, %f)\n", x3, y3, z3);

    // To check for collinearity of points
    float determinant;
    determinant = x1*(y2*z3-y3*z2)-y1*(x2*z3-x3*z2)+z1*(x2*y3-x3*y2);
    if(determinant == 0)
        printf("Given points are collinear");
    else
        printf("Given points are not collinear");

    // To print collating sequence
    if(x1>x2){
        if(x1>x3 && x2>x3){
            printf("A>B>C");
        }
        else if(x1>x3 && x2>x3){
            printf("A>C>B");
        }

    }

    else if(x1 == x2){
        if(y1>y2){
            if(y1>y3 && y2>y3){
                printf("A>B>C");
            }
            else if(y1>y3 && y2>y3){
                printf("A>C>B");
            }

        else if(y1==y2){
            if(z1>z2){
                if(z1>z3 && z2>z3){
                    printf("A>B>C");
                }
                else if(z1>z3 && z2>z3){
                    printf("A>C>B");
                }
            }

        }


        }
    }

    //In this we need to check all the coordinates like if x1>x2>x3 then A>B>C
    //But if while checking x coordinates are equal then we go to check the y coordinate
    //Similarly if y coordinates are equal we move onto check for z coordinate
    //Here branching conditions is to be used

    return 0;
}
