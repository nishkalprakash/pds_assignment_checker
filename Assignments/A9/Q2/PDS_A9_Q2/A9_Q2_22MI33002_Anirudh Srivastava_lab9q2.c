
#include<stdio.h>

typedef struct vector {
    int x;
    float* p;
}vec;

void readvector ( vec*v)
{   int i;
    scanf("%d", v->x);
    v->p=(vec*)malloc((v->x)*sizeof(float));
    for(i=0;i<(v->x);i++)
    {

        scanf("%d", &(v->p[i]));
    }
}

void main () {

vec* v1;
vec* v2;
readvector(v1);
readvector(v2);
}
