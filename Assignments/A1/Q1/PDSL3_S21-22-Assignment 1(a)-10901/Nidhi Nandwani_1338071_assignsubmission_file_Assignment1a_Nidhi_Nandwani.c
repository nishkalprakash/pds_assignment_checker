#include <stdio.h>
int main()
{
    float start,u,alpha;
    float t;
    float d, df;
    printf("Enter the values of a,u,alpha in order: ");
    scanf("%f %f %f", &start, &u, &alpha);
    printf("Enter the time: ");
    scanf("%f", &t);
    
    d = (u*t + 0.5*alpha*t*t);
    
    df = d+start;
    printf("Distance: %f", df);

}