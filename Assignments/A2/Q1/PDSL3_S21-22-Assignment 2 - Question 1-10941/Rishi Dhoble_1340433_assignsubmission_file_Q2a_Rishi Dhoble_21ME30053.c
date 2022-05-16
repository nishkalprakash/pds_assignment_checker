/*
name- Rishi Dhoble
roll no- 21ME30053
dept.- Mechanical Engnn
Package- code blocks
section- 3
*/

#include <stdio.h>
#include <math.h>

int main(){

    double z, newZ; int k, iteration = 1;

    printf("Enter value of z: ");                        // reading value of z
    scanf("%lf", &z);

    printf("\nEnter value of k: ");                     // reading value of k
    scanf("%d", &k);


    while (iteration <= k && z > 0){

        if (z >= 1){
            newZ = z - sqrt(z);
        }

        else{
            newZ = sqrt(z) - z;
        }


        if (z == newZ){

            if (z >= 1){
                newZ = z - pow((sqrt(z) - (1 / (double)iteration)), 2);
            }

            else{
                newZ = pow((sqrt(z) - (1 / (double)iteration)), 2) - z;
            }
        }


        if (newZ <= 0){
            newZ = 0;
        }


        printf("(%lf, %d)", newZ, iteration);                      // printing the new Z value and the iteration value
        if (iteration == k || newZ <= 0){
            printf("\n");
        }
        else{
            printf(", \n");
        }


        z = newZ;
        iteration++;
    }


return 0;
}
