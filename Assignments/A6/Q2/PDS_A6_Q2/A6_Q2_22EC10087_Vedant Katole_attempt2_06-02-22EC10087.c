/* Name - Vedant Katole
Roll no - 22EC10087
Section - 2
lab no- 6
problem no - 2*/

#include<stdio.h>

void main(){
    int a;
    long int b;
    long long int c;
    float f;
    char c1;
    char stri[30];
    printf("enter int:");
    scanf("%d", &a);
    printf("\nint value = %d", a);
    printf("\nenter long int:");
    scanf("%ld", &b);
    printf("\nlong int value = %ld", b);
    printf("\nenter long long int:");
    scanf("%lld", &c);
    printf("\nlong long int value = %lld", c);
    printf("\nenter float:");
    scanf("%f", &f);
    printf("\nfloat value = %f", f);
    printf("\nenter char:");
    scanf("%c", &c1);
    printf("\nchar value = %c", c1);
    printf("\nenter string:");
    scanf("%s", stri);
    printf("\nstring value = %s", stri);

    printf("/n part c /n");

    char str1[20], str2[20];
    scanf("%[^\n]%*c", str1);
    scanf("%[^\n]%s", str2); //say to read IIT KHARAGPUR
    printf("str1 = %s", str1);
    printf("str2 = %s", str2);
}
