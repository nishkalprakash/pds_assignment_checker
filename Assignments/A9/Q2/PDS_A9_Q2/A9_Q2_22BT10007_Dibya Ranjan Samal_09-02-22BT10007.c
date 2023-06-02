
#include <stdio.h>

#include <math.h>


// Structure to store a vector of n-dimension

struct Vector {

    int dimension;

    double components[100];

};


// Function to read a vector from the keyboard

void readVector(struct Vector* vector) {

    printf("Enter the dimension of the vector: ");

    scanf("%d", &(vector->dimension));


    printf("Enter the components of the vector:\n");

    for (int i = 0; i < vector->dimension; i++) {

        printf("Component %d: ", i + 1);

        scanf("%lf", &(vector->components[i]));

    }

}


// Function to calculate the dot product of two vectors

double dotProduct(struct Vector vector1, struct Vector vector2) {

    double result = 0.0;

    for (int i = 0; i < vector1.dimension; i++) {

        result += vector1.components[i] * vector2.components[i];

    }

    return result;

}


// Function to calculate the magnitude of a vector

double magnitude(struct Vector vector) {

    double result = 0.0;

    for (int i = 0; i < vector.dimension; i++) {

        result += vector.components[i] * vector.components[i];

    }

    return sqrt(result);

}


// Function to check if two vectors are similar or orthogonal

void checkVectors(struct Vector vector1, struct Vector vector2) {

    double dotProd = dotProduct(vector1, vector2);

    double mag1 = magnitude(vector1);

    double mag2 = magnitude(vector2);

    double cosAngle = dotProd / (mag1 * mag2);


    if (cosAngle == 0) {

        printf("vectors are orthogonal.\n");

    } else if (cosAngle == 1) {

        printf("Identical vectors.\n");

    } else {

        printf("The vectors are neither similar nor orthogonal.\n");

    }

}


int main() {

    struct Vector vector1, vector2;


    printf("Enter the first vector:\n");

    readVector(&vector1);


    printf("\nEnter the second vector:\n");

    readVector(&vector2);



    checkVectors(vector1, vector2);


    return 0;

}


