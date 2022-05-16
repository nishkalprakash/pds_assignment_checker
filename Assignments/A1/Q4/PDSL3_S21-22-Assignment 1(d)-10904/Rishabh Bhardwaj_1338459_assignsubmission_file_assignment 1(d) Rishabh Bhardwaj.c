/*
Rishabh Bhardwaj
21CE10052
Civil
sec-3
CodeBlock
*/
#include <stdio.h>
#include <math.h>


int main(void)
{
    int x1, x2, x3, y1, y2, y3, MAX, max;
    float d1, d2, d3;

    printf("Enter the three coordinates: ");
    scanf("%d%d%d%d%d%d", &x1, &y2, &x2, &y2, &x3, &y3);


    d1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    d2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    d3 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));

    if ( d1 > d2 && d1 > d3)
    {
        if ( d1 < d2 + d3)
        {
            printf("This is a valid triangle\n");
            return 0;
        }
        else
        {
             printf("This is a invalid triangle\n");
            return 0;
        }
    }
    else if ( d2 > d1 && d2 > d3)
    {
          if ( d2 < d1 + d3)
        {
            printf("This is a valid triangle\n");
            return 0;
        }
        else
        {
             printf("This is a invalid triangle\n");
            return 0;
        }
    }
    else if (d3 > d1 && d3 > d1)
    {
        if ( d3 < d1 + d2)
        {
            printf("This is a valid triangle\n");
            return 0;
        }
        else
        {
             printf("This is a invalid triangle\n");
            return 0;
        }
    }


    if (d1 != d2 && d2 != d3)
    {
        printf("This is obtuse-angled triangle\n");
        return 0;
    }
    else if (d1 == d2  && d2 == d3)
    {
        printf("This is acute-angled triangle\n");
        return 0;
    }
    else
    {
        printf("This is right-angled triangle\n");
        return 0;
    }



}

