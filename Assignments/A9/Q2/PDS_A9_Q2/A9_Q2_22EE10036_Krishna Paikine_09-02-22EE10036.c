#include <stdio.h>
//Defining a structure for storing vectors
typedef struct {
        float dim[100];
    } vector;

int main()
{
    vector v1, v2;
    int a, b, temp;
    scanf("%d", &a);
    int i;
    for(i=0; i<a; i++)
    {
        scanf("%f", v1.dim[i]);
    }
    scanf("%d", b);
    for(i=0; i<b; i++)
    {
        scanf("%f", v2.dim[i]);
    }
    int j;
    float x=0;
    float y=0;
    float z=0;
    for(i=0; i<b; i++)
    {
        x += v1.dim[i]*v2.dim[i];
        y += v1.dim[i]*v1.dim[i];
        z += v2.dim[i]*v2.dim[i];

    }
    if(y == 0)
    {
        printf("They are orthogonal vectors");
    }
    return 0;


}
