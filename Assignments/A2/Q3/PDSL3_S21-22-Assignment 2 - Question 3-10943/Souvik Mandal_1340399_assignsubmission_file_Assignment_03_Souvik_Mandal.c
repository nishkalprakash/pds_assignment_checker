/*
Name : Souvik Mandal
Roll No. : 21MF10036
Section : 3
Group : 5
Department : Manufacturing Science And ENGG.
Package : VS Code
Operating System : Windows

*/

#include <stdio.h>
#include <math.h>
int main()
{
    int m1[] = {8200, 8300, 6900, 9200};
    int m2[] = {7700, 3700, 4900, 9200};
    int m3[] = {1100, 6900, 500, 8600};
    int m4[] = {800, 900, 9800, 2300};

    int p1, p2, p3, p4;
    int final_sum = 10000000;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int l = 0; l < 4; l++)
            {
                for (int k = 0; k < 4; k++)
                {
                    int sum = m1[i] + m2[j] + m3[l] + m4[k];
                    if (i != j && i != l && i != k && j != l && j != k && k != l && sum < final_sum)
                    {
                        final_sum = sum;
                        p1 = i;
                        p2 = j;
                        p3 = l;
                        p4 = k;
                    }
                }
            }
        }
    }
    printf("total cost=%d \n", final_sum);
    printf("machine 1 = vendor %d \n", p1 + 1);
    printf("machine 2 = vendor %d \n", p2 + 1);
    printf("machine 3 = vendor %d \n", p3 + 1);
    printf("machine 4 = vendor %d \n", p4 + 1);
    return 0;
}