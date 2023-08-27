//Roll No:23CH10006
//Name: Anshuman Acharya
#include<stdio.h>
int main()
{
    float a,b,c,d;
    printf("We are going to study a rectangle according to the two vertices as given by you\n");
    printf("Enter your first coordinate: \n");
    scanf("%f %f",&a,&b);
    printf("Enter your second coordinate: \n");
    scanf("%f %f",&c,&d);
    float area =(c-a)*(d-b);
    float perim = 2*((d-b)+(c-a));
    float poix = (a+c)/2;
    float poiy = (b+d)/2;
    printf("The area is %f\nThe perimeter is %f\nThe midpoint is (%f,%f)\n",area,perim, poix, poiy);
    return 0;
    

}
