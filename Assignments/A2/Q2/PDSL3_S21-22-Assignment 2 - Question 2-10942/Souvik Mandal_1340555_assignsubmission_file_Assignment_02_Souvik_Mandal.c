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
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    srand(time(NULL));

    int n;
    printf("Enter the number of random steps : ");
    scanf("%d", &n);

    int k;
    printf("Enter the number of iterations : ");
    scanf("%d", &k);

    // float D_E;

    int d = 0;

    for (int i = 0; i < k; i++)
    {
        int p = 0;
        for (int j = 0; j < n; j++)
        {
            int k = rand() & 1 ? -1 : 1;
            p += k;
        }

        d += (p * p);
    }

    float D_E = sqrt(d / k);

    printf("%f", D_E);

    return 0;
}
