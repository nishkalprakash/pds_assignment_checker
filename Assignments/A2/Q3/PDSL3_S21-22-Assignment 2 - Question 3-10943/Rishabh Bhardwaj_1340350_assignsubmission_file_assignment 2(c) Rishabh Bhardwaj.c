/*
Rishabh Bhardwaj
21CE10052
Civil
sec-3
CodeBlock
windows
*/
#include <stdio.h>

int main(void)
{
    int n = 4, i, min1, min2, min3, min4, k1, k2, k3, k4;
    int m1[4], m2[4], m3[4], m4[4];

    printf("m1: ");
        scanf("%d %d %d %d", &m1[0],&m1[1],&m1[2],&m1[3]);

    printf("m2: ");
        scanf("%d %d %d %d",&m2[0], &m2[1],&m2[2],&m2[3] );

    printf("m3: ");
        scanf("%d %d %d %d", &m3[0],&m3[1],&m3[2],&m3[3]);

    printf("m4: ");
        scanf("%d %d %d %d", &m4[0],&m4[1],&m4[2],&m4[3]);

    for ( i=0; i<n; i++)
    {
        min1 = 10000;
        if (m1[i] < min1)
        {
            min1 = m1[i];
            k1 = i;
        }
        else
        {
            min1 = min1;
        }
    }
    for ( i=0; i<n , i!=k1; i++)
    {
        min2 = 10000;
        if (m2[i] < min2)
        {
            min2 = m2[i];
            k2 = i;
        }
        else
        {
            min2 = min2;
        }
    }
    for ( i=0; i<n, i!=k1, i!= k2; i++)
    {
        min3 = 10000;
        if (m3[i] < min3)
        {
            min3 = m3[i];
            k3 = i;
        }
        else
        {
            min3 = min3;
        }
    }
    for ( i=0; i<n , i!=k1, i!= k2, i!=k3; i++)
    {
        min4 = 10000;
        if (m4[i] < min4)
        {
            min4 = m4[i];
            k4 = i;
        }else
        {
            min4 = min4;
        }
    }

    printf("Total cost = %d\n", min1+ min2+min3+min4);
    printf("Machine1 - Vendor%d\n", k1+1);
    printf("Machine2 - Vendor%d\n", k2+1);
    printf("Machine3 - Vendor%d\n", k3+1);
    printf("Machine4 - Vendor%d\n", k4+1);






}
