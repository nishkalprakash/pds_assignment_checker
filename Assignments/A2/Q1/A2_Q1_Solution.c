/*Write a program to read a floating point number and display its integral part and the fractional part separately.
Example: for 123.235, it should display:
Integral part=123
Fractional part=0.235
*/
// Roll No: 19CS91R05
// Name: Nishkal Prakash
#include <stdio.h>
int main()
{
    float num;        // stores the user input
    printf("Enter a floating point number: ");
    scanf("%f", &num);
    printf("Integral part=%d\nFractional part=%f\n", (int)num, num - (int)num);
}

/*
Enter a floating point number: 123.123
Integral part=123
Fractional part=0.123001

Enter a floating point number: 123.235
Integral part=123
Fractional part=0.235001
*/