/*

sec2

name- Omkar Dilip Desai

Roll no - 22MF3IM06

q. no-01

description-  finding mean using recurrsive function      */

#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <string.h>

float mean(int *num, int n, int start, int end)
{

    float sum = 0;

    if (start >= end)
    {

        float tt;

        tt = ((float)(num[start]) / n);

        return tt;
    }

    sum = +((float)(num[start]) / n) + ((float)(num[end]) / n);

    // printf("%f ",sum);

    return sum + mean(num, n, start + 1, end - 1);
}

// float mean()

int main()
{

    int *num;

    int n;

    printf("Enter the number of inputs\n");

    scanf("%d", &n);

    num = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {

        scanf("%d", &num[i]);
    }

    for (int i = 0; i < n; i++)
    {

        printf("%d", num[i]);
    };

    printf("the mean is %f \n", mean(num, n, 0, n - 1));

    return 0;
}
