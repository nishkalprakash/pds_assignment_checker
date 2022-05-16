/*
Thota Kesava Chandra
Computer Science Department
21CS30056
Code Blocks
Windows
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    srand(time(NULL));
    int distance,d_square=0,n,k,p;
    float exp_d;
    printf("Enter the number of steps n : ");
    scanf("%d",&n);
    printf("Enter k : ");
    scanf("%d",&k);
    for (int i=1;i<=k;i++)
    {
        distance = 0;
        for (int j=1;j<=n;j++)
        {
            p = rand() & 1 ? -1 : 1;
            distance += p;
        }
        d_square += distance*distance;
        //printf("dist %d\n",distance);
    }
    exp_d = sqrt((d_square*1.0)/k);
    //printf("%d\n",d_square);
    printf("Expected distance is %f\n",exp_d);
    return 0;
}

