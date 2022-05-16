// S N Bibhudutta
// 21EC30043
// E&ECE Department 
// Package: Codeblocks
// Test 1

#include<stdio.h>

int main()
{
    //COORDINATE ARRAY FIXED 
    int x[10],y[10];

    //READING VALUES.
    printf("\n x-coordinates: ");
    for ( int i = 0; i <10; i++)
    {
        scanf("%d",&x[i]);
    }
    printf("\n y-coordinates: ");
    for ( int i = 0; i <10; i++)
    {
        scanf("%d",&y[i]);
    }

    float m,b;//m=slope , b=intercept

    float x1=0,y1=0;//mean
    float numerator=0,denominator=0;//slope

     //COMPUTING MEAN
    for (int  i = 0; i < 10; i++)
    {
        x1+=x[i];
    }
    x1=x1/10;
     for (int  i = 0; i < 10; i++)
    {
        y1+=y[i];
    }
    y1=y1/10;

    for (int  i = 0; i <10; i++)
    {
        numerator+=(x[i]-x1)*(y[i]-y1);
    }

     for (int  i = 0; i <10; i++)
     {
           denominator+=(x[i]-x1)*(x[i]-x1);
     }

     m=numerator/denominator;
     b=y1-m*x1;

     //PRINTING FINAL
     printf("\nm=%.1f,b=%.1f,line equation y=%.1fx + %.1f ",m,b,m,b);

     return 0;


}