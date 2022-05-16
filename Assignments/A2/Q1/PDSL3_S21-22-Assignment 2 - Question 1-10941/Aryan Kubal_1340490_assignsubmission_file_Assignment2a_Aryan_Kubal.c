/***************************
 * Name : Aryan Kubal
 * Roll number : 21MT30012
 * Section : 3
***************************/

#include <stdio.h>
#include <math.h>

int main()
{
    // getting a input from the user for z
    printf("Kindly Enter the value of z which is the height of the ball: ");
    double z;
    scanf("%lf", &z);

    // getting a input from the user fot k
    printf("\nKindly enter the value of k which is the number of iteration: ");
    int k;
    scanf("%d", &k);
    
    // By flag we are referring the new value of z
    double flag;

    // By ite we are referring the value of iteration
    int ite = 1;
    
    // running while loop for each step
    while (ite <= k && z > 0)
    {
        if (z >= 1)
        {
            flag = z - sqrt(z);
        }
        else
        {
            flag = sqrt(z) - z;
        }

        if (z == flag)
        {
            if (z >= 1)
            {
                flag = z - pow((sqrt(z) - (1 / (double)ite)), 2);
            }
            else
            {
                flag = pow((sqrt(z) - (1 / (double)ite)), 2) - z;
            }
        }

        if (flag <= 0)
        {
            flag = 0;
        }

        // Now we will be printing the value of new Z and iteration value
        printf("(%lf, %d)", flag, ite);
        if (ite == k || flag <= 0)
        {
            printf("\n");
        }
        else
        {
            printf(", ");
        }

        //Now new Z will become z for the iteration that will be happening next
        z = flag;

        // Increasing the iteration value by 1
        ite++;
    }
    return 0;
}