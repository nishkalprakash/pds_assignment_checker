//Lab 2
// Roll number -23CE10065
// Shashank Sahil



#include <stdio.h>

int a;
int b;
int c;
int d;

int main(){
    printf( "Enter the coordinates of the bottom left corner of the rectangle\n");
    scanf("%d %d", &a ,&b);
    printf( "Enter the coordinates of the top right   corner of the rectangle\n");
    scanf("%d %d", &c ,&d);
    printf (" Area of the reactangle is %d \n" ,(d-b)*(c-a));
    printf( " Perimetr of the rectangle is %d\n" ,((d-b)+ (c-a))*2);
    float x = (d+b)/2;
    float y = (c+a)/2;
    printf(" Point of intersection of diagonals is(%f,%f)",y,x);
    return 0;

}
