#include<stdio.h>
#include<math.h>

/*Name-Chetna
  roll no.-21CS10019
  dep-CSE
  package-code blocks*/

int main()
{

    printf("Enter value of z: ");
    double z;
    scanf("%lf",&z);

    printf("\nEnter value of k: ");
    int k;
    scanf("%d", &k);

    int iteration = 1;
    double newZ;

    while (iteration <= k && z > 0)
    {
        if (z >= 1)
        {newZ = z - sqrt(z);}
        else
        {newZ = sqrt(z) - z;}

        if (z == newZ)
        {if (z >= 1)
            {newZ = z - pow((sqrt(z) - (1 / (double)iteration)), 2);}
            else
            {newZ = pow((sqrt(z) - (1 / (double)iteration)), 2) - z;}
        }
        if (newZ <= 0)
        {newZ = 0;}

        printf("(%lf, %d)", newZ, iteration);
        if (iteration == k || newZ <= 0)
        {
            printf("\n");
        }
        else
        {printf(", ");}

        z = newZ;
        iteration++;
    }
    return 0;
}
