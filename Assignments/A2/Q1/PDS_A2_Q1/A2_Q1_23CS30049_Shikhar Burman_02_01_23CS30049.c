//Roll No.: 23CS30049
//Name: Shikhar Burman

//Importing Standard Input-Output library
#include <stdio.h>

void main()
{
    float decimal, fractional;
    int integer;

    //Input floating point number from user
    printf("Enter a decimal(floating point) number: ");
    scanf("%f", &decimal);

    //Calculating integral and fractional part
    integer = (int)decimal;
    fractional = decimal - integer;

    //Displaying the output in proper format
    printf("Integral part = %d\n", integer);
    printf("Fractional part = %f\n", fractional);

}