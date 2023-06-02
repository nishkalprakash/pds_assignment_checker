#include <stdio.h>
#include <math.h>
#define MAX_DIMENSION 10
struct Vector {

    double components[MAX_DIMENSION];

    int dimension;

};
void readVector(struct Vector *vector) {


    scanf("%d", &(vector->dimension));

    for (int i = 0; i < vector->dimension; i++) {
        scanf("%lf", &(vector->components[i]));

    }

}
double dotProduct(struct Vector *vector1, struct Vector *vector2) {

    double product = 0.0;

    for (int i = 0; i < vector1->dimension; i++) {

        product += vector1->components[i] * vector2->components[i];

    }

    return product;

}
double Magnitude(struct Vector *vector) {

    double magnitude = 0.0;

    for (int i = 0; i < vector->dimension; i++) {

        magnitude += vector->components[i] * vector->components[i];

    }

    return sqrt(magnitude);

}
void check(struct Vector *vector1, struct Vector *vector2) {

    double d = dotProduct(vector1, vector2);

    double m1 = Magnitude(vector1);

    double m2 = Magnitude(vector2);


    double cosine = d / (m1 * m2);


    if (cosine == 0.0) {

        printf("vectors are orthogonal\n");

    } else if (cosine == 1.0) {

        printf("identical vectors\n");

    } else {

        printf("the vectors are neither similar nor orthogonal");

    }

}
int main() {

    struct Vector vector1, vector2;
    readVector(&vector1);
    readVector(&vector2);
    check(&vector1, &vector2);
    return 0;

}


