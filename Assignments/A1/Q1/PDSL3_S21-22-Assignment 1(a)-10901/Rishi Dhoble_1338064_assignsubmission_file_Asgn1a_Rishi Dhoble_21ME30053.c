/*
Name- Rishi Dhoble
Roll No- 21ME30053
Department- Mechanical Engineering
Section- 3
*/


#include<stdio.h>

int main() {

    float a, u, alpha, t, d;
    // a- start point    u- initial velocity   alpha- accn   t- time   d- distance

    printf("enter starting point in m:");
    scanf("%f", &a);

    printf("\n");

    printf("enter initial velocity in ms-1:");
    scanf("%f", &u);

    printf("\n");

    printf("enter acceleration in ms-2:");
    scanf("%f", &alpha);

    printf("\n");

    printf("enter time in s:");
    scanf("%f", &t);

    d = a + (u*t) + (0.5*alpha*t*t);

    printf("the final distance is %f", d);


return 0;
}
