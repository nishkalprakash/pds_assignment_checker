#include<stdio.h>
#include<math.h>

// Func2
3tion to find whether lines intersect
void intersection(float a1, float b1, float c1, float a2, float b2, float c2, int line1, int line2){
    float determinant = a1*b2 - a2*b1;
    float x = ((c1*b2 - c2*b1)/determinant);
    float y = ((a1*c2 - a2*c1)/determinant);

    if(determinant == 0.00){
        printf("Lines %d and %d are parallel; so no point of intersection.\n", line1, line2);
    }
    else{
        printf("Point of intersection between L%d and L%d = (%f, %f)\n", line1, line2, x, y);
    }
}

// Function to find x coordinates of intersection point
float x_coor(float a1, float b1, float c1, float a2, float b2, float c2){
    float determinant = a1*b2 - a2*b1;
    if(determinant != 0){
        return ((c1*b2 - c2*b1)/determinant);
    }

}

// Function to find y coordinates of intersection point
float y_coor(float a1, float b1, float c1, float a2, float b2, float c2){

    float determinant = a1*b2 - a2*b1;
    if(determinant != 0){
        return ((a1*c2 - a2*c1)/determinant);
    }

}

int main(){

    // Declaring variables
    float a[3], b[3], c[3], x[3], y[3], side1, side2, side3, det1, det2, det3, area;

    // Taking user input
    for(int i = 0; i < 3; i++){
        printf("Line %d: ", (i+1));
        scanf("%f %f %f", &a[i], &b[i], &c[i]);
    }

    //Calculating determinants
    det1 = a[0]*b[1] - a[1]*b[0];
    det2 = a[1]*b[2] - a[2]*b[1];
    det3 = a[0]*b[2] - a[2]*b[0];


    // For line 1 and 2
    intersection(a[0], b[0], c[0], a[1], b[1], c[1], 1, 2);

    // For line 2 and 3
    intersection(a[1], b[1], c[1], a[2], b[2], c[2], 2, 3);

    // For line 3 and 1
    intersection(a[0], b[0], c[0], a[2], b[2], c[2], 1, 3);

    // If any two lines are parallel side length and area won't be found
    if(det1*det2*det3 != 0){

        x[0] = x_coor(a[0], b[0], c[0], a[1], b[1], c[1]);
        y[0] = y_coor(a[0], b[0], c[0], a[1], b[1], c[1]);

        x[1] = x_coor(a[1], b[1], c[1], a[2], b[2], c[2]);
        y[1] = y_coor(a[1], b[1], c[1], a[2], b[2], c[2]);

        x[2] = x_coor(a[0], b[0], c[0], a[2], b[2], c[2]);
        y[2] = y_coor(a[0], b[0], c[0], a[2], b[2], c[2]);

        // Finding Side lengths

        side1 = sqrt(pow((x[0] - x[1]), 2) + pow((y[0] - y[1]), 2));
        side2 = sqrt(pow((x[1] - x[2]), 2) + pow((y[1] - y[2]), 2));
        side3 = sqrt(pow((x[0] - x[2]), 2) + pow((y[0] - y[2]), 2));

        printf("Side lengths = %f, %f, %f.\n", side1, side2, side3);

        // Area of Triangle
        area =0.5*(x[0]*(y[1] - y[2]) + x[1]*(y[2] - y[0]) + x[2]*(y[0] - y[1]));
        // Printing absolute area
        if(area>0){
            printf("Area = %f", area);
        }
        else{
            printf("Area = %f", -area);
        }

    }

}
