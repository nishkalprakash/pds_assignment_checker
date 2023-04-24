// 22PH10002
// Lab Test 1
// Problem 1
#include <stdio.h>

int main(){
    //Reading inputs and storing in appropriate variables
    float x1, y1, x2, y2, x3, y3, x4, y4;
    printf("(x1,y1) = ");
    scanf("%f%f", &x1, &y1);        // Storing pt 1
    printf("(x2,y2) = ");
    scanf("%f%f", &x2, &y2);        // Storing pt 2
    printf("(x3,y3) = ");
    scanf("%f%f", &x3, &y3);        // Storing pt 3
    printf("(x4,y4) = ");
    scanf("%f%f", &x4, &y4);        // Storing pt 4
    printf("\n");

    //Calculating areas for all possible combinations using area of triangle formula
    float a123, a124, a134, a234;                                       //aijk calculates and stores area of triangle formed by pt i, pt j and pt k
    a123 = ((x1*y2)-(x2*y1)-(x1*y3)+(x3*y1)+(x2*y3)-(y2*x3))/2.0;
    a124 = ((x1*y2)-(x2*y1)-(x1*y4)+(x4*y1)+(x2*y4)-(y2*x4))/2.0;
    a134 = ((x1*y3)-(x3*y1)-(x1*y4)+(x4*y1)+(x3*y4)-(y3*x4))/2.0;
    a234 = ((x2*y3)-(x3*y2)-(x2*y4)+(x4*y2)+(x3*y4)-(y4*x3))/2.0;

    // If any area is negative this part corrects it to a positive value
    if(a123<0){a123 = a123*-1;}
    if(a124<0){a124 = a124*-1;}
    if(a134<0){a134 = a134*-1;}
    if(a234<0){a234 = a234*-1;}

    //Deciding which area is smallest and printing
    if((a123<=a124)&&(a123<=a134)&&(a123<=a234)){
        printf("Points having the minimum area: (%.2f,%.2f),(%.2f,%.2f),(%.2f,%.2f)", x1,y1,x2,y2,x3,y3); // a123 is the smallest
        printf("\n\nArea = %.2f", a123);  // Corresponding area is printed
    }
    else if((a124<=a134)&&(a124<=a234)){
        printf("Points having the minimum area: (%.2f,%.2f),(%.2f,%.2f),(%.2f,%.2f)", x1,y1,x2,y2,x4,y4); // a124 is the smallest
        printf("\n\nArea = %.2f", a124);  // Corresponding area is printed
    }
    else if(a134<=a234){
        printf("Points having the minimum area: (%.2f,%.2f),(%.2f,%.2f),(%.2f,%.2f)", x1,y1,x3,y3,x4,y4); // a134 is the smalllest
        printf("\n\nArea = %.2f", a134);  // Corresponding area is printed
    }
    else{
        printf("Points having the minimum area: (%.2f,%.2f),(%.2f,%.2f),(%.2f,%.2f)", x2,y2,x3,y3,x4,y4); // a 234 is the smallest
        printf("\n\nArea = %.2f", a234);  // Corresponding area is printed
    }

return 0;
}
