/*
Name: Adipta Halder
Roll Number: 21EC30003
Department: EC
Package: CODEBLOCKS
Assignment Class: 3
Assignment: 1d
*/
#include<stdio.h>
#include<math.h>

int main(){
    float xa,ya,xb,yb,xc,yc,AB,BC,AC;
    //taking the coordinates from user
    printf("Enter the first coordinate of the triangle: ");
    scanf("%f%f",&xa,&ya);
    printf("Enter the second coordinate of the triangle: ");
    scanf("%f%f",&xb,&yb);
    printf("Enter the third coordinate of the triangle: ");
    scanf("%f%f",&xc,&yc);
    //finding side length
    AB=sqrt(((xa-xb)*(xa-xb))+((ya-yb)*(ya-yb)));
    BC=sqrt(((xc-xb)*(xc-xb))+((yc-yb)*(yc-yb)));
    AC=sqrt(((xa-xc)*(xa-xc))+((ya-yc)*(ya-yc)));
    //first check validity
    if((AB+BC>AC)&&(AB+AC>BC)&&(BC+AC>AB)){
        printf("\nValid triangle");
        //for right angled triangle using pythagoras theorem
        if((((xa-xb)*(xa-xb))+((ya-yb)*(ya-yb)))==(((xc-xb)*(xc-xb))+((yc-yb)*(yc-yb)))+(((xa-xc)*(xa-xc))+((ya-yc)*(ya-yc))))
           {
            printf("\nThis is a right angled triangle.");
        }
        else if((((xa-xb)*(xa-xb))+((ya-yb)*(ya-yb)))+(((xc-xb)*(xc-xb))+((yc-yb)*(yc-yb)))==(((xa-xc)*(xa-xc))+((ya-yc)*(ya-yc)))){
            printf("\nThis is a right angled triangle.");
        }
        else if((((xa-xb)*(xa-xb))+((ya-yb)*(ya-yb)))+(((xc-xa)*(xc-xa))+((yc-ya)*(yc-ya)))==(((xb-xc)*(xb-xc))+((yb-yc)*(yb-yc)))){
            printf("\nThis is a right angled triangle.");
        }
        //checking obtuse
        else if((AC>=AB)&&(AC>=BC)&&((AC*AC)>(AB*AB)+(BC*BC))){
                printf("\nThis is a obtuse angled triangle.");
        }
        else if((AB>=BC)&&(AB>=AC)&&((AB*AB)>(AC*AC)+(BC*BC))){
                printf("\nThis is a obtuse angled triangle.");
        }
        else if((BC>=AB)&&(BC>=AC)&&((BC*BC)>(AB*AB)+(AC*AC))){
                printf("\nThis is a obtuse angled triangle.");
        }
        //checking acute
        else if((AC>=AB)&&(AC>=BC)&&((AC*AC)<(AB*AB)+(BC*BC))){
                printf("\nThis is a acute angled triangle.");
        }
        else if((AB>=BC)&&(AB>=AC)&&((AB*AB)<(AC*AC)+(BC*BC))){
                printf("\nThis is a acute angled triangle.");
        }
        else if((BC>=AB)&&(BC>=AC)&&((BC*BC)<(AB*AB)+(AC*AC))){
                printf("\nThis is a acute angled triangle.");
        }
    }
    else{
        printf("\nInvalid traingle");
    }
 return 0;
}
