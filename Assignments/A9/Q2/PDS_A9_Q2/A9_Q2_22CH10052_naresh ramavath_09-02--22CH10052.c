#include <stdio.h>
#include <math.h>

#define MAX_DIMENSION 10

typedef struct {
    int dimension;
    double components[MAX_DIMENSION];
} Vector;

void readVector(Vector *vector) {
    printf("Enter the dimension of the vector: ");
    scanf("%d", &(vector->dimension));

    printf("Enter the components of the vector: ");
    for (int i = 0; i < vector->dimension; i++) {
        scanf("%lf", &(vector->components[i]));
    }
}

double dotProduct(const Vector *vector1, const Vector *vector2) {
    double result = 0.0;
    for (int i = 0; i < vector1->dimension; i++) {
        result += (vector1->components[i] * vector2->components[i]);
    }
    return result;
}

double magnitude(const Vector *vector) {
    double result = 0.0;
    for (int i = 0; i < vector->dimension; i++) {
        result += pow(vector->components[i], 2);
    }
    return sqrt(result);
}

void checkSimilarityOrthogonality(const Vector *vector1, const Vector *vector2) {
    double dotProd = dotProduct(vector1, vector2);
    double magnitude1 = magnitude(vector1);
    double magnitude2 = magnitude(vector2);

    if (fabs(dotProd - (magnitude1 * magnitude2)) < 1e-9) {
        printf("Identical Vectors\n");
    } else if (fabs(dotProd) < 1e-9) {
        printf("Vectors are orthogonal\n");
    } else {
        printf("The vectors are neither similar nor orthogonal\n");
    }
}

int main() {
    Vector vector1, vector2;

    printf("Enter the first vector:\n");
    readVector(&vector1);

    printf("Enter the second vector:\n");
    readVector(&vector2);

    checkSimilarityOrthogonality(&vector1, &vector2);

    return 0;
}
