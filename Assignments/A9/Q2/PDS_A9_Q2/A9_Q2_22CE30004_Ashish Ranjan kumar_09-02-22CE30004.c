#include <stdio.h>
#include <math.h>

// Structure to store a vector of n-dimension
typedef struct {
    double components[100]; // Assume maximum dimension is 100
    int dimension;
} Vector;

// Function to read a vector from the keyboard
void readVector(Vector *v) {
    printf("Enter the dimension of the vector: ");
    scanf("%d", &(v->dimension));

    printf("Enter the components of the vector:\n");
    for (int i = 0; i < v->dimension; i++) {
        printf("Component %d: ", i + 1);
        scanf("%lf", &(v->components[i]));
    }
}

// Function to calculate the dot product of two vectors
double dotProduct(Vector v1, Vector v2) {
    double result = 0;
    for (int i = 0; i < v1.dimension; i++) {
        result += v1.components[i] * v2.components[i];
    }
    return result;
}

// Function to calculate the magnitude of a vector
double magnitude(Vector v) {
    double result = 0;
    for (int i = 0; i < v.dimension; i++) {
        result += v.components[i] * v.components[i];
    }
    return sqrt(result);
}

// Function to check if two vectors are similar or orthogonal
void checkVectors(Vector v1, Vector v2) {
    double dot = dotProduct(v1, v2);
    double mag1 = magnitude(v1);
    double mag2 = magnitude(v2);
    double cosine = dot / (mag1 * mag2);

    if (cosine == 0) {
        printf("The vectors are orthogonal.\n");
    } else if (cosine == 1) {
        printf("The vectors are identical or parallel.\n");
    } else {
        printf("The vectors are similar.\n");
    }
}

int main() {
    Vector v1, v2;

    printf("Enter vector 1:\n");
    readVector(&v1);

    printf("\nEnter vector 2:\n");
    readVector(&v2);

    printf("\nChecking vectors...\n");
    checkVectors(v1, v2);

    return 0;
}
