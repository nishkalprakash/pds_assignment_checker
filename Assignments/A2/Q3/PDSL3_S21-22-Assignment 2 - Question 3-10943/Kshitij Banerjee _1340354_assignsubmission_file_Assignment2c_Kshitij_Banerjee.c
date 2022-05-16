#include <stdio.h>
#include <math.h>
int main()
{
    int m1[] = {8200, 8300, 6900, 9200};
    int m2[] = {7700, 3700, 4900, 9200};
    int m3[] = {1100, 6900, 500, 8600};
    int m4[] = {800, 900, 9800, 2300};
    int results[24];
    int index = 0;
    int i, j, k, l;
    for (i = 0; i < 4; i++)
    {
        int tempsum = 0;
        for (j = 0; j < 4; j++)
        {
            if (j == i)
                continue;
            for (k = 0; k < 4; k++)
            {
                if (k == i || k == j)
                    continue;
                for (l = 0; l < 4; l++)
                {
                    if (l == i || l == j || l == k)
                        continue;
                    results[index] = m1[i] + m2[j] + m3[k] + m4[l];
                    index++;
                }
            }
        }
    }
    int min_sum = results[0];
    int min_sum_index = 0;
    for (index = 1; index < 24; index++)
    {
        if (results[index] < min_sum)
        {
            min_sum = results[index];
            min_sum_index = index;
        }
    }
    int count = 0, flag = 1;
    for (i = 0; i < 4 && flag; i++)
    {
        for (j = 0; j < 4 && flag; j++)
        {
            if (j == i)
                continue;
            for (k = 0; k < 4 && flag; k++)
            {
                if (k == i || k == j)
                    continue;
                for (l = 0; l < 4 && flag; l++)
                {
                    if (l == i || l == j || l == k)
                        continue;
                    if (count == min_sum_index)
                        flag = 0;
                    else
                        count++;
                }
            }
        }
    }
    printf("Total cost = %d\n", min_sum);
    printf("Machine1 - Vendor%d\n", i);
    printf("Machine2 - Vendor%d\n", j);
    printf("Machine3 - Vendor%d\n", k);
    printf("Machine4 - Vendor%d\n", l);
    return 0;
}
