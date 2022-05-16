/*Name:- Shubhrashayak Sarkar;
Roll No:- 21NA30029
Package:- Visual Studio Code
Assignment class:- 6
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int x1, y1, x2, y2, x3, y3, a, b, c; // a, b, c are square of the distance
    float l1, l2, l3;
    printf("Write the co-ordinates of your three point\n");
    printf("First co-ordinate:\n");
    scanf("%d%d", &x1, &y1);
    printf("Second co-ordinate:\n");
    scanf("%d%d", &x2, &y2);
    printf("Third co-ordinate:\n");
    scanf("%d%d", &x3, &y3);
    a = (((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)));
    b = (((x3 - x2) * (x3 - x2)) + ((y3 - y2) * (y3 - y2)));
    c = (((x1 - x3) * (x1 - x3)) + ((y1 - y3) * (y1 - y3)));
    l1 = sqrt(a); // This is the distance formula between two points in x y plane
    l2 = sqrt(b);
    l3 = sqrt(c);
    if (((l1 + l2) < l3) || ((l2 + l3) < l1) || ((l1 + l3) < l2))
    {
        printf("This triangle is invalid");
    }
    else if (((a + b) == c) || ((b + c) == a) || ((c + a) == b))//This condition verifies the pythagorian identity
    {
        printf("The given triangle is right angled triangle\n");
    }
    else if (((a + b) < c) || ((b + c) < a) || ((c + a) < b))
    {
        printf("This is an obtused angle triangle\n");
    }
    else
    {
        printf("This is an acute angled triangle\n");
    }    
    return 0;
}