/*
	Name: Harsh Khandeparkar
	Roll: 21EC30023
	Dept: Electronics and Electrical Communication Engineering
	Package: Visual Studio Code, gcc v11.2.0
	Assign: 1(a)
*/

#include <stdio.h>

int main() {
    float a,   // initial distance
        u,     // initial speed
        alpha, // acceleration
        t;     // time

    printf("Enter the values of a, u, alpha in order: ");
    scanf("%f %f %f", &a, &u, &alpha);

    printf("Enter the time: ");
    scanf("%f", &t);

    // distance from origin = initial distance + ut + (1/2)at^2
    float d = a + u * t + alpha * t * t / 2;

    printf("Distance = %f\n", d);

    return 0;
}