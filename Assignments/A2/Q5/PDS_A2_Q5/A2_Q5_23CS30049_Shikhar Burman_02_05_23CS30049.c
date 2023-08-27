//Roll No.: 23CS30049
//Name: Shikhar Burman

//Importing Standard Input-Output library
#include <stdio.h>

void main()
{
    int a, b, c, d, area, perim;
    float p, q;

    // Input coordinates from user
    printf("Enter coordinates of bottom-left corner of rectangle (keep a space between them): ");
    scanf("%d %d", &a, &b);
    printf("Enter coordinates of top-right corner of rectangle (keep a space between them): ");
    scanf("%d %d", &c, &d);

    // Calculates area and perimeter
    area = (c-a)*(d-b);
    perim = ((c-a)+(d-b))*2;

    // Outputs area and perimeter
    printf("Area of rectangle = %d. Perimeter of rectangle = %d\n", area, perim);

    // Calculates coordinates of point of intersection of diagnols
    p = ((float)(a + c))/2;
    q = ((float)(b + d))/2;

    // Outputs coordinates of point of intersection of diagnols
    printf("Coordinates of point of intersection of diagnols is (%0.2f, %0.2f)\n", p, q);
}