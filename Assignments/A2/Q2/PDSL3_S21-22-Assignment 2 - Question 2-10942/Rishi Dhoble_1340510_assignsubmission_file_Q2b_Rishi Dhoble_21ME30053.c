/*
name- Rishi Dhoble
roll no- 21ME30053
dept.- Mechanical Engnn
Package- code blocks
section- 3
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {

    double n, D=0.00, De; int k, i, j, step;

    printf("enter no. of steps as a unit of distance:");     // n- taking the unit
    scanf("%lf", &n);

    printf("enter iterations:");                             // k- number of iterations of particles
    scanf("%d", &k);

    if (n<0 || k<=0) {printf("invalid input. restart program");}

    else {
        for (i=0; i<k;i++) {                                     // i- iterating element
        step=0;                                              // step- variable for each unit a particle undergoes
        for (j=0; j<n; j++){step+=rand() & 1 ? -1:1;}        // j- iterating element

        D+= pow(step,2);                                     //sum of square
    }
    De= sqrt(D/(float) k);                                   //expected distance
    printf("The expected distance is :");
    printf("%lf", De);

    }

return 0;
}
