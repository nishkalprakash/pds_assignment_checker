#include <stdio.h>
#include <math.h>
#include <stdlib.h>

    struct vector{ // defining structure for vectors

    int *n[100]; // declaring array pointer to store n dimension

    };

    void comparevectors(struct vector v1 , struct vector v2);

int main(){

    struct vector v1; // declaring vector v1
    struct vector v2; // declaring vector v2

    int n; // declaring variable for dimension of n

    printf("Enter the dimension of vector : ");
    scanf("%d", &n); // taking input for dimension of n

    n = (int *)malloc(n * sizeof(int)); // demanding size for vector of n dimension


    printf("Enter %d elements in vector 1 : ", n);

    for(int i=0; i<n; i++){

        scanf("%d", &v1.n[i]); // taking input for vector v1

    }

    printf("\n");

    printf("Enter %d elements in vector 2 : ", n);
    scanf("%d", &n); // taking input for dimension of n

   for(int i=0; i<n; i++){

    scanf("%d", &v2.n[i]); // taking input for vector v2

   }





    return 0;
}
// defining our function

    /*void comparevectors(struct vector v1, struct vector v2){

    int dotprod = 0;

    for(int i=0; i<n; i++){

        dotprod = v1.n[i] * v2.n[i];

    }
     if(dotprod == 0){

        printf("Vectors are orthogonal");

     }

     else{

        printf("Vectors are not orthogonal");
     }




    }
*/
