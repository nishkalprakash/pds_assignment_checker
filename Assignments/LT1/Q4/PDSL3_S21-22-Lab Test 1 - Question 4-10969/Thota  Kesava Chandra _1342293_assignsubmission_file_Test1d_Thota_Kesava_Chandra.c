/*
Thota Kesava Chandra
Computer Science Department
21CS30056
Code Blocks
Windows
*/

#include <stdio.h>

int main()
{
    int x[10],y[10],x_sum=0,y_sum=0,i;
    float x_mean,y_mean,numerator=0,denominator=0,slope,intercept;
    printf("Enter the 10 x coordinates with spaces between them\n");
    scanf("%d %d %d %d %d %d %d %d %d %d",&x[0],&x[1],&x[2],&x[3],&x[4],&x[5],&x[6],&x[7],&x[8],&x[9]);
    printf("\nEnter the 10 y coordinates with spaces between them\n");
    scanf("%d %d %d %d %d %d %d %d %d %d",&y[0],&y[1],&y[2],&y[3],&y[4],&y[5],&y[6],&y[7],&y[8],&y[9]);

    for (i=0;i<10;i++)
    {
        x_sum += x[i];
        y_sum += y[i];
    }

    x_mean = x_sum/10.0;
    y_mean = y_sum/10.0;

    for (i=0;i<10;i++)
    {
        numerator += (x[i]-x_mean)*(y[i]-y_mean);
        denominator += (x[i]-x_mean)*(x[i]-x_mean);
    }
    slope = numerator/denominator;
    intercept = y_mean - (slope*x_mean);
    printf("m = %.1f  ,  b = %.1f  ,  line equation y = %.1fx + %.1f\n",slope,intercept,slope,intercept);
    return 0;
}
