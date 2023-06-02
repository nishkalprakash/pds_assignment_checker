
#include <stdio.h>
#include <math.h>

#define MAX_DIMENSION 10

// Structure to store a vector of n-dimension
typedef struct {
    int dimension;
    double components[MAX_DIMENSION];
} Vector;

// Function to read a vector from the keyboard
Vector readVector() {
    Vector vec;

    printf("Enter the dimension of the vector: ");
    scanf("%d", &vec.dimension);

    printf("Enter the components of the vector:\n");
    for (int i = 0; i < vec.dimension; i++) {
        printf("Component %d: ", i + 1);
        scanf("%lf", &vec.components[i]);
    }

    return vec;
}

// Function to calculate the dot product of two vectors
double dotProduct(Vector vec1, Vector vec2) {
    if (vec1.dimension != vec2.dimension) {
        printf("Error: Vectors have different dimensions.\n");
        return 0;
    }

    double dot = 0;

    for (int i = 0; i < vec1.dimension; i++) {
        dot += vec1.components[i] * vec2.components[i];
    }

    return dot;
}

// Function to calculate the magnitude of a vector
double magnitude(Vector vec) {
    double magnitude = 0;

    for (int i = 0; i < vec.dimension; i++) {
        magnitude += vec.components[i] * vec.components[i];
    }

    return sqrt(magnitude);
}

// Function to check if two vectors are similar or orthogonal
void checkVectors(Vector vec1, Vector vec2) {
    double dot = dotProduct(vec1, vec2);
    double magnitude1 = magnitude(vec1);
    double magnitude2 = magnitude(vec2);
    double cosine = dot / (magnitude1 * magnitude2);

    if (cosine == 0) {
        printf("The two vectors are orthogonal.\n");
    } else if (cosine == 1 || cosine == -1) {
        printf("The two vectors are identical.\n");
    } else {
        printf("The two vectors are neither similar nor orthogonal. Cosine value: %lf\n", cosine);
    }
}

int main() {
    Vector vec1, vec2;

    printf("Enter the first vector:\n");
    vec1 = readVector();

    printf("Enter the second vector:\n");
    vec2 = readVector();

    printf("Checking vectors:\n");
    checkVectors(vec1, vec2);

    return 0;
}

