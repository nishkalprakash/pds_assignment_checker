/*Name:- Shubhrashayak Sarkar;
Roll No:- 21NA30029
Package:- Visual Studio Code
Assignment class:- 6
*/
#include <stdio.h>
#include <math.h>

int main()
{
    double position, newPosition, z, s, k;
    printf("Enter the initial position of the ball\n");
    scanf("%lf", &position);
    printf("Enter the number of times you want to run the iteration\n");
    scanf("%lf", &k);
    for (int i = 0; i < k; i++)
    {
        s = sqrt(position);
        newPosition = position - s;
        z = newPosition;
        if (z < 0)
        {
            z = z * (-1);
        }
        else
        {
            if (z == position)//I couldn't solve the trapped part.
            {
                s = s - (1 / (k * k));
                z = position - (1/(k*k));
            }
            else if (z == 0)
            {
                break;
            }
        }
        printf("%lf, %d\n", z, i + 1);
        position = z;
    }

    return 0;
}