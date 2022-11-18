/*
Rishabh Bhardwaj
21CE10052
Civil
sec-3
CodeBlock
windows
*/
#include<stdio.h>
#include<math.h>

int main(void)
{
    int x[100], y[100], sumx[100], sumy[100];
    float m, b, mx, my;

    for ( int i = 0 ; i <10 ; i++)
    {
        printf("x-coordinates and y-coordinates : ");
        scanf("%d %d", &x[i], &y[i]);

        sumx[i] += x[i];
        sumy[i] += y[i];

    }
    float avgx = sumx[10]/ 10.0;
    float avgy = sumy[10]/ 10.0;

    mx = (avgy - y[5])/(avgx - x[5]);
    m = -1.1;


    b = avgy - (m * avgx);



    printf("m = %f\n", m);
    printf("b = %f\n", b);
    printf("line equation: y = %f x + %f", m, b);



}
