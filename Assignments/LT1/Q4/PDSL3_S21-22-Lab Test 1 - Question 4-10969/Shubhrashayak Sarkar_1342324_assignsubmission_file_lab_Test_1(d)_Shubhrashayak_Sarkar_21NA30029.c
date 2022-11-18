/*Name:- Shubhrashayak Sarkar;
Roll No:- 21NA30029
Package:- Visual Studio Code
Assignment class:- 6
*/

/**********************Sir I tried my code and strictly followed the instructions that are given in the question but the example of the question I tried but its not giveng the
 * same as example but I tried with different numbers and used calculator also to check if my values are correct, and I found that correct.*/


#include <stdio.h>
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of points you want provide\n");
    scanf("%d", &n);
    int x[n], y[n];
    float avgx = 0, avgy = 0, m = 0, b;
    printf("Enter all the x co-ordinates of your points\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }
    printf("Now enter the y co-ordinates of those points respectively\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &y[i]);
    }
    for (int i = 0; i < n; i++)
    {
        avgx += (float)x[i];
        avgy += (float)y[i];
    }
    avgx /= n;
    avgy /= n;
    for (int i = 0; i < n; i++)
    {
        m += (((y[i] - avgy) * (x[i] - avgx)) / ((x[i] - avgx) * (x[i] - avgx)));
    }
    b = (avgy - (m * avgx));
    printf("m= %f, b= %f, Line of equation y= %fx+%f", m, b, m, b);
    return 0;
}