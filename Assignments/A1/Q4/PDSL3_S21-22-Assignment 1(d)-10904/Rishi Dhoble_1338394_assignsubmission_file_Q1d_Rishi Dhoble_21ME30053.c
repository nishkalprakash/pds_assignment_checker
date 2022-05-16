/*
Name- Rishi Dhoble
Roll No- 21ME30053
Department- Mechanical Engineering
Section- 3
*/


#include<stdio.h>
#include<math.h>

int main() {

    float x1, y1, x2, y2, x3, y3, d12, d23, d31,d12sq,d23sq,d31sq;
    int t;

    printf("enter point 1 :");
    scanf("%f%f", &x1, &y1);

    printf("\n");

    printf("enter point 2 :");
    scanf("%f%f", &x2, &y2);

    printf("\n");

    printf("enter point 3 :");
    scanf("%f%f", &x3, &y3);

    printf("\n");

    d12 = sqrt ( ((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1)) ) ;
    d12sq=((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1));
    d23 = sqrt ( ((x3-x2)*(x3-x2)) + ((y3-y2)*(y3-y2)) );
    d23sq=((x3-x2)*(x3-x2)) + ((y3-y2)*(y3-y2));
    d31 = sqrt ( ((x1-x3)*(x1-x3)) + ((y1-y3)*(y1-y3)) );
    d31sq=((x1-x3)*(x1-x3)) + ((y1-y3)*(y1-y3));


        if ((d12< (d23+d31))||(d23<(d12+d31))||(d31<(d12+d23))){
            printf("valid triangle\n");
        if ((d12sq == d23sq + d31sq)||(d23sq == d12sq + d31sq)||(d31sq == d23sq + d12sq)) {
            printf("right angled triangle");
        }
        else if ((pow(d12,2) < (pow(d23,2) + pow(d31,2)))||(pow(d23,2) < (pow(d12,2) + pow(d31,2)))||(pow(d31,2) < (pow(d23,2) + pow(d12,2)))){
            printf("acute triangle");
        }

        else if ((pow(d12,2) > (pow(d23,2) + pow(d31,2)))||(pow(d23,2) > (pow(d12,2) + pow(d31,2)))||((pow(d31,2) > (pow(d23,2) + pow(d12,2))))) {
            printf("obtuse triangle");
        }
        }


        else {
            printf("invalid triangle");
        }


return 0;
}
