#include <stdio.h>
#include <math.h>
void main()
{
    float x1,y1,z1;
    float x2,y2,z2;
    float x3,y3,z3;
    float s1,s2;
    scanf("%f %f %f",&x1,&y1,&z1);
    scanf("%f %f %f",&x2,&y2,&z2);
    scanf("%f %f %f",&x3,&y3,&z3);

    /* points A B C are taken from the user */

    printf("A(x1,y1,z1):(%f,%f,%f)\n",x1,y1,z1);
    printf("B(x2,y2,z2):(%f,%f,%f)\n",x2,y2,z2);
    printf("C(x3,y3,z3):(%f,%f,%f)\n",x3,y3,z3);

    /* points A B C are printed as given by the user */



   /*to be collinear cross product of AB and Ac will be equals to 0
   |  i      j      k   |
   |x1-x2  y1-y2  z1-z3 |    value of this determinant decides the coefficients of i j k.
   |x1-x3  y1-y3  z1-z3 |

   to be collinear coefficients of i j k will be equal to zero.

   */
    if((y1-y2)*(z1-z3)==(y1-y3)*(z1-z2)&&(x1-x2)*(z1-z3)==(x1-x3)*(z1-z2)&&(x1-x2)*(y1-y3)==(x1-x3)*(y1-y2))
    {
        printf("The given three points are collinear");

    }
    else
        {
            printf("The given three points are not collinear");
        }

        }
