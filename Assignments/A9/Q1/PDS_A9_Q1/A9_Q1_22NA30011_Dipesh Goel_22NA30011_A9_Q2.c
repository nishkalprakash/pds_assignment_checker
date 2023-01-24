#include<stdio.h>

/*
    PDS LAB ASSIGNMENT - 9
    DIPESH GOEL
    22NA30011
    PROBLEM - 2
*/

typedef struct complex{
    float real;
    float imag;
} complex;


complex Read_Complex(){
    complex temp;
    scanf("%f %f", &temp.real,&temp.imag);
    return temp;
}

complex add(complex z1, complex z2){
    complex temp;
    temp.real= z1.real + z2.real;
    temp.imag= z1.imag + z2.imag;
    return temp;
}

int main(){

    complex Z1, Z2;                         // Two complex numbers (User-Defined)
    complex Z;                              // Stores the result of addition (Calculated)
    printf("Z1 : "); Z1= Read_Complex();    // Reads Complex Number from User
    printf("Z2 : "); Z2= Read_Complex();    // Reads Complex Number from User

    Z = add(Z1,Z2);                         // Call to add() function
    if (Z.imag>=0.00)   printf("Z = %.2f + %.2fi",Z.real,Z.imag);
    else printf("Z = %.2f %.2fi",Z.real,Z.imag);

    return 1;
}
