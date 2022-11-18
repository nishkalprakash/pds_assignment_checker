#include <stdio.h>
int main()
{
    float a, u, alpha;
    printf("Enter the values of a, u, alpha in order:");
    scanf("%f%f%f", &a, &u, &alpha);
    float time;
    printf("Enter the time:");
    scanf("%f", &time);

    float d = a + u * time + 0.5 * alpha * time * time;
    printf("Distance = %f", d);

    return 0;
}
